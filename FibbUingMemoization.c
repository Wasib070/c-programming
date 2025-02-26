#include<stdio.h>
int f[50];
int fib(int n){
if(n<=1){
    return n;
}
else if(f[n]!=-1){
    return f[n];
}
else{
    f[n]=fib(n-1)+fib(n-2);
    return f[n];
}
}
int main(){
    for(int i=0;i<=50;i++){
    f[i]=-1;}
   int z= fib(10);
   printf("%d",z);
}