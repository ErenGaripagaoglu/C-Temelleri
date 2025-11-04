#include <stdio.h> // library import for "standart input-output . header"

int main() {
    
    int num1 = 5; //define integer variable and assing value
    double num2 = 2.2; //define double variable and assing value
    float num3; //define float variable
    
    num3 = 2.5; //assing value to "num3" variable
    
    char initial = 'e';

    /* Definiton of Strings */
    char name[32]; //strings are array of chars
    char *department = "Management Information Systems"; //strings decleration with "*" pointer
    
    printf("%d", num1); //print the variable by defining the type, then calling its name
    printf("\n"); //new line on console view
    
    printf("%lf", num2);
    printf("\n");
    
    printf("%f", num3);
    printf("\n");
    
    printf("%c", initial);
    printf("\n");
    
    printf("Please write your name> ");
    scanf("%s", name); //strings doesnt need "&" address operator on scanf() functions
    printf("Welcome, %s \n", name);
    
    printf("Welcome to %s department \n", department);
    
    // %d for digit/integer
    // %lf for longfloat/double
    // %f for float
    // %c for char
    // %s for string
    
    return 0;
}
