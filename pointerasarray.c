#include<stdio.h>
int main(){
int A[]={1,2,3,4,5};
int *p;
p=A;  /*or we can writr &A[0] array always pointing to zeroth index*/
printf("Using data vairable\n");
for(int i=0;i<4;i++){
	printf("%d\t",A[i]);
}
printf("\nUsing pointer vairable\n");
for(int i=0;i<4;i++){
	printf("%d\t",p[i]);
}
}
