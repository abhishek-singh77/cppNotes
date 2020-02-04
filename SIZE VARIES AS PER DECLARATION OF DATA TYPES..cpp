#include<stdio.h>
//size varies if data type is not arranged in ascendinfg or descending order

struct A{
	char ch;
	short int a;
	int num;
	
};
int main () {
	printf("%d", sizeof(struct A));
}
