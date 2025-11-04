#include <stdio.h> // library import for "standart input-output . header"

int main() {
    
    /* Arithmetic Expressions
     * + addition
     * - substraction
     * / division
     * * multiplication
     * % modulus
     */
    
    /* Precedence (Priority) in Expressions
     * B - Brackets
     * O - Order
     * D - Division
     * M - Multiplication
     * A - Addition
     * S - Substraction
     */
    
    //Integer-Integer division results integer
    int exmpl1 = 5 / 2;
    printf("Integer Div: 5 / 2 = %d \n", exmpl1);
    
    //Float-Float division results float
    float exmpl2 = 5.0 / 2.0;
    printf("Float Div: 5 / 2 = %f \n", exmpl2);
    
    //Double-Integer division results float BUT the result variable has to be double
    double exmpl3= 5.0 / 2;
    printf("Float Div: 5 / 2 = %f \n", exmpl3);
    
    int count = 0;
    int x = 1, y = 2;
    
    // count = count + 1;
    count++;
    printf("Counter = %d \n", count);
    
    // y = y + 1; x = y;
    printf("Before: x = %d, y = %d \n", x, y);
    x = ++y;
    printf("After: x = %d, y = %d \n", x, y);
    
    x = 1; y = 2; //reset x,y values (ignore)
    
    // x = y; y = y +1;
    x = y++;
    printf("After: x = %d, y = %d \n", x, y);
    
    return 0;
}
