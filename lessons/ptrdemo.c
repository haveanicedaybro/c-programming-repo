#include<stdio.h>

int main(){
    /* int a = 5;
    int *ptr;
    ptr = &a;
    printf("%d\n",ptr);
    printf("%d",*ptr);
    return 0;*/
    int a=1026;//normal declaration
    int *p;//pointer type declaration
    p=&a;
    printf("%d\n",p);
    printf("%d\n",*p);
    char* p0;//a char ptr declaration
    p0=(char*)p;
    printf("%d",*p0);


}