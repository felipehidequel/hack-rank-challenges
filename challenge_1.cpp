#include <iostream>
#include <cstdio>
using namespace std;

struct imprime 
{
    int i;
    long i2;
    char ltr;
    float r;
    double r2;
};

int main() {
    imprime x;
    scanf("%d %ld %c %f %lf", &x.i, &x.i2, &x.ltr, &x.r, &x.r2);
    printf("%d\n%ld\n%c\n%.3f\n%.9lf\n", x.i, x.i2, x.ltr, x.r, x.r2);
    return 0;
}