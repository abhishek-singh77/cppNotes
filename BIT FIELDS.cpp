#include<stdio.h>
/* Bit fields are used to specify the memory to the variables so that  no extra memory is used
struct A{
    int dd;
	int mm;
	int yy;
};
compare the codes above and below and if you'll copile them you'll see the difference in size
the above will store 12 byte
4byte = 32bits
and below code will store 20bits only.

SIMPLY CONVERT THE MEMORY HEAP INTO BIT FIELDS BY USING SEMI COLON AS SHOWN BELOW
*/
struct A{
    int dd:5;
	int mm:4;
	int num:11;
};
int main () {
	printf("%d", sizeof(struct A));
}
