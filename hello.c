#include<math.h>
#include<stdio.h>
int main() {
    double num, result;
    printf("Enter a number: ");
    scanf("%lf", &num);
    result = sqrt(num);
    printf("The square root of %.2f is %.2f\n", num, result);

    // 添加了一句注释
    return 0;
}
