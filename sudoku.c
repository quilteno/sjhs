#include <stdio.h>

void f(int *p);
int main(){
    int a=9;
    f(&a);
    return 0;
}

void f(int *p){
    printf("*p=%d",p[0]);
}