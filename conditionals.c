#include <stdio.h>

int main() {
    
    int num;
    
    printf("Please write a number: ");
    scanf("%d", &num);
    
    //if clause with the condition
    if (num > 0) {
        printf("Positive \n");
    }
    else if (num < 0) { // runs if the previous condition is not met
        printf("Negative \n");
    }
    else // runs if none of the conditions above has met, does not need a condition to run
    {
        printf("Number is 0 \n");
    }
    
    return 0;
}
