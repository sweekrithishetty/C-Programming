#include <stdio.h>
int main()
{
    float var1= 3.14567899871223;
    double var2 = 3.14567899871223;
    long double var3 = 3.14567899871223;

    printf("%d\n", sizeof(float));
    printf("%d\n", sizeof(double));
    printf("%d\n", sizeof(long double));
    printf("%.16f\n", var1);
    printf("%.18Lf\n", var3);
    printf("%.16f\n", var2);





}
