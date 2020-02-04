//pointer to function
//points the address of a function it'll pass the function as function parameter
#include<iostream>
using namespace std;
void fun(){
	cout<<"Function with no arguments  and no return type";
}
int fun2(){
	cout<<'\n'<<"Function with return type";
	return 20;
}
int fun3(int a){
	cout<<'\n'<<"Function with argument and return type:: "<<a<<'\n';
	return a+25;
}

int main(){
	void(*fptr)()=&fun;
	fptr();
	int(*fptr2)()=&fun2;
	cout<<'\n'<< fptr2();
	int(*fptr3)(int)=&fun3;//mention the argument type also if declared in function
	cout<<'\n'<< fptr3(90);
	
}
