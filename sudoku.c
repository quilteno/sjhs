#include <stdio.h>

void f(int *p);
int main(){
    int a=9;
    int *p=&a;
printf("*p=%d\n",*p);
    f(&a);
    return 0;
}

void f(int *p){
    printf("*p=%d\n",p[0]);
}
