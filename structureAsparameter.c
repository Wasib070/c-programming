#include <stdio.h>
struct rectangle {
    int length;
    int breadth;
	};
int Sum(struct rectangle p) {
   return p.length + p.breadth; 
}
int main() {
    struct rectangle p1 = {10, 20};
     int sum = Sum(p1);
     printf("The sum of length and breadth is: %d\n", sum);
      return 0;
}
