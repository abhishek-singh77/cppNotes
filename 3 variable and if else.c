#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter a,b,c");
	scanf("%d%d%d",&a,&b,&c);
	a>b? a>c? printf("a is largest"): printf("b is largest"): b>c? printf("b is largest"): printf("c is largest"); 
	return 0;
}
