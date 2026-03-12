#include <stdio.h>

int main() {
    
    int num;
    
    printf("Please write a number between 1-3: ");
    scanf("%d", &num);
    
    //switch allows us to use less conditionals if we need to check different values of same variable
    switch(num){ //needs variable argument to check
        case(1): printf("Number 1"); break; // case(desired value): action; break; //works like a loop so needs break; statement
        case(2): printf("Number 2"); break;
        case(3): printf("Number 3"); break;
            
        default: printf("Out of range"); // default to failproof unwanted values
    }
    
    return 0;
}
