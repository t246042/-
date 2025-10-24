#include <float.h>
#include <limits.h>
#include <stdio.h>

int main(void)
{
    printf("short型の最大値:%g\n", SHRT_MAX);
    printf("short型の最小値:%g\n", SHRT_MIN);
    printf("float型の最大値:%e\n", FLT_MAX);
    printf("float型の最小値:%e\n", FLT_MIN);
    printf("float型の精度:%d\n", FLT_DIG);
    printf("long double型の最大値:%Lf\n", LDBL_MAX);
    printf("long double型の最小値:%d\n", LDBL_MIN);
    printf("long double型の精度:%d\n", LDBL_DIG);

    return 0;
}