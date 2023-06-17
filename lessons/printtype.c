#include<stdio.h>
int i,f,c;
void printData(void* data,char dataType){
    /*switch (dataType)
    {
    case i:
        printf("Integer:%d\n",*(int*)data);
        break;
    
    case f:
        printf("Float:%d\n",*(double*)data);
        break;
    
    case c:
        printf("Character:%d\n",*(char*)data);
        break;
    
    default:
        break;
    }*/ // this seems wrong
    if(dataType=='i') printf("Integer:%d\n",*(int*)data);
    else if(dataType=='f') printf("Float:%e\n",*(float*)data);
    else if(dataType=='c') printf("Character:%c\n",*(char*)data);

}

int main(){
    int a;
    printf("Integer input for data type convert:");
    scanf("%d",&a);
    
    printData(&a,'i');
    printData(&a,'f');
    printData(&a,'c');
    
    return 0;
}