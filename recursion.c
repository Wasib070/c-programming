#include <stdio.h>

int main() {
	fun(4);
	return 0;
}
void fun(int n){
	if(n>0)
	{
		printf("Hello\t");
		fun(n-1);
	}
}

