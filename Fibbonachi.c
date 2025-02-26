#include<stdio.h>
int fibb(int n){
    int i,s=0,t0=0,t1=1;
    if(n<=1){
        return n;
    }
    else{
        for(i=2;i<=n;i++){
        s=t0+t1;
        t0=t1;
        t1=s;
        }
        return s;
    }
}
int main(){
    printf("%d\t",fibb(6));
}