#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
 {
    int num1;
    int num2;
    
    scanf("%d %d", &num1, &num2);
    
    float dec1;
    float dec2;
    
    scanf("%f %f", &dec1, &dec2);
    
    printf("%d", num1 + num2);
    
    printf(" ");
    
    printf("%d", num1 - num2);
    
    printf("\n");
    
    printf("%.1f", dec1 + dec2);
    
    printf(" ");
    
    printf("%.1f", dec1 - dec2);
    
    return 0;
    
}   
    
