#include <stdio.h>

void printAge(int *pAge) {
    printf("Your age is: %d\n", *pAge);
}

void birthday(int *age) {
    //pass by reference
        //if we just send the variable and modify value inside this func.
        //  it will not effect the variable value, so pointer has to be used
    (*age)++; //if we do not use (), memory address will be incremented, not the it points to
                //reason: operator precedence
}

int main() {
    
    int x=4;
    //int x is equal to 4
    
    //pointer must be same type that it points to
    int * pX = &x;
    //int pointer(*) with name pX = memory address of x
    
        //de-referencing
    int i = *pX;
    //int i = variable pointed to by x;
    
    printf("Address of x: %p\n", &x);
    printf("Value of x: %d\n", x);
    
    printf("Value of pX: %p\n", pX);
    printf("Value at stored address: %d\n", *pX);
                                        //de-referencing extracts the value inside the pointer's address
    
    /* Size Of */
    printf("Size of x: %d Bytes\n", sizeof(x)); //integer 4 bytes
    printf("Size of pX: %d Bytes\n", sizeof(pX)); //hexadec 8 bytes
    
    
    /* Passing a Pointer to Function */
    int age = 22;
    int * pAge = NULL; //Alternative to declare a pointer**
    //Good practice to declare a pointer as null, if you are not assigning a value directly
    pAge = &age;
    
    printAge(pAge);
    printAge(&age); //Alternative way, it just needs an address, pointer is the 'variable' that stores the address
    
    return 0;
}
