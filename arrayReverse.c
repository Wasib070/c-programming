#include<stdio.h>
int main(){
int x[100];
int n,i,j,temp;
printf("Enter the size of array :");
scanf("%d",&n);
printf("Enter Array elements :");
for(i=0;i<n;i++){
    printf("eElement at index %d:\n",i);
    scanf("%d",&x[i]);
}
for(i=0,j=n-1;i<j;i++,j--){
    temp=x[i];
    x[i]=x[j];
    x[j]=temp;
}
for ( i = 0; i < n; i++)
{
    printf("%d",x[i]);
}
}
