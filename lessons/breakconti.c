#include<stdio.h>
int main(){
    /*for(int i=0;i<10;i+=1){
        if(i==4){
            break;
        }
        printf("%d\n",i);
    }*/ //base on the output we can say "break" is used to jump out of a loop, in this case it break from 4 and stop printing output
   for(int i=0;i<10;i+=1){
        if(i==4){
            continue;//thay continue cho break
        }
        printf("%d\n",i);
    }    //"continue dont break the loop, it breaks 'one' iteration in the loop, or you can say it skip the case 4

    //it is the same for "while" loop
}