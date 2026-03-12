#include <stdio.h>

int function1() {
    printf("This block runs if the function is called \n");
    
    return 0; // because function type is int
}
                // takes arguments
void printNumbers(int max) { //does not need to return value because type is void
    for(int i=0; i < max; i++){
        printf("%d \n", i);
    }
}


int main() {
    
    function1(); //calls the function
    printNumbers(10); //argument input can be variable in same type
    
    return 0;
}
