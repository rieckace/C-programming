// Online C compiler to run C program online
#include <stdio.h>

int main() {
float cel, far;
printf("Enter the temp in degree celsius:-\n");
scanf("%f", &cel);
far = (cel*9/5) + 32;

    printf(" The temperature of %.2f is: %.2f degreee farenheit ",cel,far);

    return 0;
}