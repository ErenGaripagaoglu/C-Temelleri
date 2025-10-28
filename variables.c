#include <stdio.h> // library import for "standart input-output . header"

int main() {
    
    int num1 = 5; //define integer variable and assing value
    double num2 = 2.2; //define double variable and assing value
    float num3; //define float variable
    
    num3 = 2.5; //assing value to "num3" variable
    
    char initial = 'e';
    
    printf("%d", num1); //print the variable by defining the type, then calling its name
    printf("\n"); //new line on console view
    
    printf("%lf", num2);
    printf("\n");
    
    printf("%f", num3);
    printf("\n");
    
    printf("%c", initial);
    printf("\n");
    
    
    // %d for digit/integer
    // %lf for longfloat/double
    // %f for float
    // %c for char
    
    return 0;
}
