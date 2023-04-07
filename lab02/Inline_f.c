#include <stdio.h>

static inline int addition(int a, int b){
	return a+b;
}

int main(){
	int a = 5;
	int b = 3;
	int c;
	
	c = addition(a,b);

	printf("The result of %d + %d is equal to %d\n",a,b,c);
}
