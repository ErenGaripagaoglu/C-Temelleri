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
    printf("%lf", pi);
    // printf( format-control-string , other-arguments );
    
    return 0;
}
