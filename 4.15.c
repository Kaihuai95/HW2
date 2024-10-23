#include <stdio.h>
#include <math.h>

int main()
{
    double principal = 5000.0;
    int years = 15;
    double a[] = {0.1, 0.105, 0.11, 0.115, 0.12};
    int R = sizeof(a) / sizeof(a[0]);
    printf("%s\t%s\n", "Interest Rate", "Amount on deposit");
    for (int i = 0; i < R; i++){
        double amount = principal * pow(1.0 + a[i], years);
        printf("%.3f\t\t%.2f\n", a[i], amount);
    }
}