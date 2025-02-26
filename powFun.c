#include<stdio.h>
int power(int m,int n){
    if(n==0)
    return 1;
    else 
    return power(m,n-1)*m;
}
int main(){
    int x=2,y=9;
    int val=power(x,y);
    printf("value of 2 power 5 :\t%d",val);
}