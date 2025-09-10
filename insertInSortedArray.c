#include<stdio.h>
int main(){
    int a[100],i,key,l,n;
    printf("Enter the size of array:\n");
    scanf("%d",&n);
    l=n-1;
    printf("Enter Array elements in sotred(ascending) order:\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("Enter the key to be inserted :\n");
    scanf("%d",&key);
    while(a[l]>key){
    a[l+1]=a[l];
    l--;
    }
    a[l+1]=key;
    printf("sorted Array after insertion :\n");
   for(i=0;i<n;i++)
   printf("%d\t",a[i]);
   }