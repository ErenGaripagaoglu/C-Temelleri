#include <stdio.h> // library import for "standart input-output . header"

int main() {
    
    int item;
    float cost;
    
    //             | Address Operator
    //             v
    scanf("%d %f", &item, &cost);
    //     ^specifier1 ^memory address1
    //         ^specifier2  ^memory address2
    // scanf(-conversion specifiers-, -Memory Address-);
    
    double pi = 3.14;
    printf("%lf \n", pi);
    // printf( format-control-string , other-arguments );

    /* Skipping Blank Characters */
    int day, month, year;
    scanf("%d-%d-%d", &day, &month, &year);
    // Aim is to get input in "dd-mm-yyyy" format
    printf("%d %d %d \n", day, month, year);

    /* Align Digits */
    int a=15, b=116;
    printf("%d\n", a); // Without
    printf("%d\n", b); // Formatting
    
    printf("%3d\n", a); // With
    printf("%3d\n", b); // Formatting
    
    /* Limit Floating Point Presicion */
    double floatingPoint = 251.7366;
    printf("%f %.3f %.2f %e %E\n", floatingPoint, floatingPoint, floatingPoint, floatingPoint, floatingPoint);
    
    /* Escape Characters
     * \n = new line
     * \t = tab space
     * \a = alert (bell)
     * \b = backspace
     * \" = " (text)
     * \' = ' (text)
     * \\ = \ (text)
     */
    
    return 0;
}
