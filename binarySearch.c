#include<stdio.h>
int main(){
    int a[100],n,i;
    printf("Enter the array size :\n");
    scanf("%d",&n);
    for (i = 0; i < n; i++)
    {
          printf("Enter element in increasing order at index %d\n",i);
        scanf("%d",&a[i]);
    }
    printf("Enter the value to search:\n");
    int key;
    scanf("%d",&key);
    int l=0,h=n-1;
    int res=0;
    int index;
    while (l<=h)
    {
       int mid=(l+h)/2;
       if(a[mid]==key){
         res=1;
         index=mid;
        break;
       }
       else if(key<a[mid]){
        h=mid-1;
       }
       else 
       l=mid+1;
    }
    if(res){
        printf("Found at index: %d",index);

    }
    else{
        printf("Not found");
    }
    
    
    

}
