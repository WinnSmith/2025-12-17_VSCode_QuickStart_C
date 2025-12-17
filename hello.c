#include<math.h>
#include<stdio.h>
int main() {
    double num, result;
    printf("Enter a number: ");
    scanf("%lf", &num);
    result = sqrt(num);
    printf("The square root of %.2f is %.2f\n", num, result);
    printf("Hello, World!\n");

    return 0;
}
