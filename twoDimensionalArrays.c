#include <stdio.h>

int main() {
    
    char numbers[3][3]; //2D array
            //3 columns
            //2 rows
                //variables can be used as in max_length examples from my other files
    
    numbers[0][0] = 1;
    numbers[0][1] = 2;
    numbers[0][2] = 3;
    numbers[1][0] = 4;
    numbers[1][1] = 5;
    numbers[1][2] = 6;
    
            //variables can be further improve the for loops flexibility to size
    for (int i=0; i < 3; i++) { //indexing rows
        for (int j = 0; j < 3; j++) { //indexing columns
            printf("%d ", numbers[i][j]);
        }
        printf("\n"); //new line after current row ends
    }
    
    
    return 0;
}
