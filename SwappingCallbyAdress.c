#include <stdio.h>
void swap(int *a, int *b) {
    int temp = *a;  
    *a = *b;        
    *b = temp;      
}

int main() {
    int x=9, y=10;
    printf("Before swapping x = %d, y = %d\n", x, y);
    swap(&x,&y); 
    printf("After swapping x = %d, y = %d\n", x, y);

    return 0;
}
