#include<stdio.h>
int fibb(int n){
    if(n<=1)
        return n;
        return fibb(n-2)+fibb(n-1);
    
}
int main(){
printf("%d\t",fibb(6));
}