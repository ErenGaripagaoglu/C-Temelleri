#include <stdio.h>

int main() {
    
    for(int i=0; i < 10; i++) {
        if(i == 3){
            continue; //skips to next step
        }
        if(i == 6) {
            break; // breaks the loop
        }
        
        printf("%d \n", i);
    }
    
    return 0;
}
