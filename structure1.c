#include<iostream>
using namespace std;

struct rectangle{
	int length;
	int breadth;
};
struct student{
	int Roll;
	char Name[20];
	char Adress[20];
	
}S1;
int main(){
	/*declare and initianlize*/
	student s1{29,"wasib","palhallan"};
	cout<<s1.Roll<<"\t"<<s1.Name<<"\t"<<s1.Adress<<endl;
	/* declared first than intialized*/
struct rectangle s;
	s.length=20;
	s.breadth=10;
	int area=s.length*s.breadth;
	cout<<"Area of rectangle is"<<" "<<area<<endl;
}
