/*

1st turn off : Editor: Quick Suggestions, Editor : inline suggest
    Editor: Snippet Suggestions
Controls whether snippets are shown with other suggestions and how they are sorted.
C_cpp: suggest_snippets
editor - inline suggest enabled:
    TO DO List for Learning C Basics

    - Assign a value to a variable ✅
    - Print text and variable values to the console ✅
    - Read user input from the console ✅
    - Use basic data types (int, float, char, double) ✅ 
    - Work with strings (char arrays)✅
    - Create and use functions ✅ 
    - Pass arguments to functions and return values ✅
    - Perform arithmetic operations (+, -, *, /, %) ✅ 
    - Use conditional statements (if, else, switch) ✅ 
    - Use loops (for, while, do-while) ✅  
    - Use arrays (one-dimensional and multi-dimensional) ✅ --> Look for multiDimensional Use cases
    - Use structs to group data ✅ 
    - Use pointers (declare, assign, dereference) ✅ 
    

    - Read from and write to files
    - Handle errors (basic error checking)
    - Use standard library headers (stdio.h, stdlib.h, string.h, math.h)
    - Implement your own header file and include it
    - Use a community-created header/library (e.g., ncurses, zlib, sqlite3)
    - Compile and run your code using a Makefile
    - Write and run basic unit tests
    - Debug your code using gdb or similar tools

    ----- Apuntes : ------- 
    
    Formato printf:
    %d or %i: Used for signed decimal integers (int). While %i can automatically detect the base (decimal, octal, or hexadecimal) during input, %d specifically expects a decimal integer.
    %c: Used for a single character (char).
    %ld : long
    %s: Used for strings (arrays of characters terminated by a null character).
    %f: Used for single-precision floating-point numbers (float).
    %lf: Used for double-precision floating-point numbers (double).
    %u: Used for unsigned decimal integers (unsigned int).
    %o: Used for octal integers.
    %x or %X: Used for hexadecimal integers (lowercase or uppercase, respectively).
    %p: Used for memory addresses or pointers.
    %e or %E: Used for floating-point numbers in scientific notation (lowercase or uppercase 'e').
    %%: Used to print a literal percentage sign.
    Operadores LOgicos : 
    && AND
    || OR --> ctrl + shift + u --> U+007C --> |
    ! NOT
*/

#include<stdio.h> // standard input-output  header

int Calculator(int x,int y); // Prototype
int a;
void example();
void declaringArrays();
void Cycles();

void main()
{ 
    // Void functions does not return any value, known as procedures in other languagues
    int x = 4;
    float e = 31/2.0; // --> when operated, float numbers must be declared as so or the result it will be rounded 
    char c = 'a';
    long T = 100000000000000000;
    char name[] = "Lisardo"; // if array is declared without specified size, compilator  will asigned the size of the declaration value (7 in this case)
    printf("int: %d\n", x);
    printf("float %f\n", e);
    printf("char: %c\n", c);
    printf("long: %ld\n", T);
    printf("string %s\n", name);
    //declaringArrays();
    //a = Calculator(); //If the type is defined in the prototype, you should not re assign it
    //Cycles();

    /*
    printf("Enter an integer x");
    scanf("%d", &x);
    printf("Enter an integer y");
    scanf("%d", &y);
    Calculator(x, y);
    */
   
}

void declaringArrays()
{ 
    
    // --- Uni dimensional arrays ---
    //int myArray[]; This will output a compilation error since the program wont know how much memory allocate
    int OtoT[10] = {0}; // [number] represents the size of the array, (100 means 100 values can fit in this declaration) BE CAREFUL WITH MEMORY LEAKS
    //{} means for all the spaces in the array, initializating to zero (empty)
    int TtoF[10]; // this line will initialize an empty structure
    OtoT[0] = 1;
    OtoT[1] = 2;
    TtoF[0] = 3;
    TtoF[1] = 4;
    printf("1 to 2 first position %d\n", OtoT[0]);
    printf("1 to 2 second position %d\n", OtoT[1]);
    printf("1 to 2 first position %d\n", TtoF[0]);
    printf("1 to 2 second position %d\n", TtoF[1]);
    printf("1 to 2 no allocated space %d\n", OtoT[8]);
    printf("3 to 4 no allocated space %d\n", TtoF[8]);

}

void example()
{
    printf("this will be printed");
    return;// voids will not return anything but you can use a return RW to exit prematurely
    printf("this will not");
}

int Calculator(int x , int y)
{ 
    int result;
    result = x + y;
    return result;
}

void Conditional()
{
    int x = 20;
    if(x > 5)
    {
        printf("x es mayor que 5");
    }
    else
    {

        printf("x es menor que 5");
    
    }

   
}
void multidimensionalArrays(){
    // a multidimensional array is defined as an array with more than one dimension
    //More than one dimension means it can work in multiple directions (as a table per example)
    int arr[2][2] = { {10, 20}, {30, 40} };
    /* 
       Declare and initialize a 2×2 integer array.
       arr[0][0] = 10, arr[0][1] = 20,
       arr[1][0] = 30, arr[1][1] = 40 
       each [] assign the size for the table
       Say you got 10 students and each writes 3 tests. You can create an array like: arr_name[10][3]
    */
}

void Cycles(){

    int x = 1;
    int y = 3;
    int j;

    for(int i = 0; i < 9; i++){
        
        printf("%d\n", i);

    }

    while(x < 9){
        
        printf("%d\n", x);
        x++;

    }

}

void pointers(){

    int myAge = 43;     // An int variable
    int* ptr = &myAge;  // A pointer variable, with the name ptr, that stores the address of myAge

    // Output the value of myAge (43)
    printf("%d\n", myAge);

    // Output the memory address of myAge (0x7ffe5367e044)
    printf("%p\n", &myAge);

    // Output the memory address of myAge with the pointer (0x7ffe5367e044)
    printf("%p\n", ptr);

    //pointers and deferences are both declared with *
    /*
        int* myNum; -> Pointer, points to the memory addres
        int *myNum; -> Deference, points to the value assigned to that addres
    */
   //pointers are used to create dynamic memory allocations in arrays

}

void passwordValidator(){
    printf("this is the password Validator");
    malloc();
    free();
}

void creatingStructures(){
    //structure can be created outside of a void 
    //an structure is a way to create complex data-structure(duhhh)
    struct Mystructure{ // declaration
        int num;
        char charac; // member (variables)
    };// structures must be finished with a semicolon
    struct Mystructure s1; // -> Using the keyword declaration you can asign a name to the structure
    s1.num = 10;
    s1.charac = 'c';
    //Then you can assign values
    //structures can be reused changing the name of the structure to modify
    struct Mystructure s2;
    s2.charac = 'b';
}