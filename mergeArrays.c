#include<stdio.h>
void mergeArray(int a[],int b[],int m,int n){
  int i=0,j=0,k=0;
    int s=m+n;
    int res[s];
    while(i<m && j<n){
        if(a[i]<b[j])
        res[k++]=a[i++];
        else
        res[k++]=b[j++];
    }
    for(;i<m;i++)
    res[k++]=a[i];
      for(;j<n;j++)
    res[k++]=b[j];
    
    printf("\nMerged arragy:\n");
    for ( i = 0; i < s; i++)
    {
        printf("%d\t",res[i]);
    }
}
int main(){
    int a[5]={1,2,8,11,15};
    int b[5]={9,17,19,55,59};
    printf("two arrays before merging\n");
    printf("array a:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t",a[i]);
    }
      printf("\narray b:\n");
    for (int j = 0; j < 5; j++)
    {
        printf("%d\t",b[j]);
    }
    
    mergeArray(a,b,5,5);


}