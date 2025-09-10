#include<stdio.h>
char IsArraySorted(int a[],int n){
    int res=0;
    for(int i=0;i<n-1;i++){
        if(a[i]>a[i+1]){
        res=1;break;
        }
    }
    if(res==1){
        return 'f';
    }
    else
    return 't';
}
int main(){
    int a[]={1,2,3,4,5,6};
    char z=IsArraySorted(a,6);
    printf("%c",z);
}