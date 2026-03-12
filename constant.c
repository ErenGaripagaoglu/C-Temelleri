#include <stdio.h>
#define PI 3.14 //defining constant no '=' or ';'

int main() {
    
    int rad;
    float area;
    
    printf("Please enter radius of circle: ");
    scanf("%d", &rad);

    area = 2 * PI * rad;
    printf("%f \n", area);
    
    return 0;
}
