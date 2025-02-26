#include<stdio.h>
struct student{
	int roll;
	char name[20];
};
struct rectangle{
	int length;
	int breadth;
	char a;
};

int main(){
	rectangle r={4,6};
 student s[2];
 printf("size is %lu (paddingg concept) \n",sizeof(r));
	for(int i=0;i<2;i++){
		printf("Enter Rollno and Name\n");
		scanf("%d %s",&s[i].roll,s[i].name );
	}
	for(int i=0;i<2;i++){
		printf("entered data\n");
		printf("%d %s \n", s[i].roll,s[i].name);
	}
	
return 0;
}
