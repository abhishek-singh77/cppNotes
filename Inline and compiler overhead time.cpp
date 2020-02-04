//inline hiding

/*Function call compiler overhead time 
Time taken by the compiler to execute is depends on various steps these steps take many time 
for eg;  viod fun() {
				printf("HEllo World");
			}
			main() {
			for (i=0; i<5; i++)
			fun();
		}
	this total programs takes lots of space and time
	So inline is used to reduce the extra time tiaken by the compiler for excecution
	
	INLINE is a request to the compiler which is accepted or declined by the compiler depending upon the below condition
	1- fun() should not have a loop
	2 if switch case and goto are present then rejected
	3- no recursion call should be present
	4- fun() should not return another function it should return some pure alue and give a proper exit
	
	
	
HOW TO MAKE THE FUN() INLINE?
				
	*/
#include<iostream>
class test{
	int num;
	int temp;
	public:
		inline void setNum(int a);
		inline int getNum();
};
// to define a fun() ouside the class provide fully qualified name for a member fun(). 
// To do this we need to use scope resolution (::) operator wit class name before fun() name.
void test::setNum(int a){
	num = a;
}
int test::getNum(){
	return num;
}
int main(){
	test t1; //Class is INSTANTIATED (T1 is object)
	t1.setNum(34); //setNum() get called usimg object
	std::cout<<"Num::" << t1.getNum();
}


