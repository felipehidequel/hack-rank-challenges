#include <stdio.h>

void update(int *a,int *b) {
    int soma = *a+*b;
    int subtrai = *a-*b;
    if(subtrai<0){
       subtrai = subtrai*(-1);
    }
    *a = soma;
    *b = subtrai;     
}


int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d\n", a, b);

    return 0;
}