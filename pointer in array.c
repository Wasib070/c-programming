#include<stdio.h>
void Ary(int *arr,int n){
for(int i=0;i<6;i++){
	printf("%d\t",arr[i]);
}
}
int main(){
	int A[]={1,2,3,4,5,6};
    Ary(A,6);
	return 0;
}
