#include <stdio.h>

int main() {
    
    //for loop
    for (int i=0; i<10; i++) { //counter integer, condition to run the block, increment step
        printf("%d \n", i);
    }
    
    //while loop
    int j = 0; //counter integer
    while (j < 10) { //condition
        printf("%d \n", j);
        j++; // increment step
    }
    
    //do-while
    int k = 0; //counter int
    do{ // runs the block then checks if condition is met before re-running the block
        printf("%d \n", k);
        k++; // increment step
    } while(k < 10); // conditional
    
    return 0;
}
