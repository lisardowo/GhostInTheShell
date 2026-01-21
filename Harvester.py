from ast import main
import clang.cindex

SUSPICIOUS = ["malloc"]

#ARRAYS WERE FUNCTIONS ARE SORTED IN 3 POSSIBLE LEVELS OF DANGEROUSLY

foundFunctions = [] #level 1 (low)
possibleVulnerable =  [] # level 2 (Suspicious)
dangerousFunctions = [] # level 3 (Directly dangerous)
Fragment = []
def find_functions(node):
    
    if node.kind == clang.cindex.CursorKind.FUNCTION_DECL:
        if node.is_definition():
            startLine = node.extent.start.line
            endLine = node.extent.end.line
            foundFunctions.append({
                "name": node.spelling,
                "start": startLine,
                "end": endLine
            })
            if node.spelling in SUSPICIOUS:
                print("sus")
            print(f"Found Function: {node.spelling} (Lines {startLine}-{endLine})")
            
    
    for child in node.get_children():
        find_functions(child)

index = clang.cindex.Index.create()
tu = index.parse("test_code.c")
find_functions(tu.cursor)
print(foundFunctions)

"""if __name__ == "__main__":

    find_functions(tu.cursor)"""