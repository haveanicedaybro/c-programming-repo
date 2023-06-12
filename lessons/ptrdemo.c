#include<stdio.h>

int main(){
     int a = 5;
    int* ptr;
    ptr = &a;
    printf("%d\n",ptr);
    printf("%d",*ptr);
    return 0;
}