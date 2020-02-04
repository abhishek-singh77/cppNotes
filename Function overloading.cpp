// function overloading
/* multiple function with same name varies with types of arguments, no. of argument, order of argument
	
	
	function overloading is not possible 
	when return type is difficult i.e., int sum(int);
										float sum(int);
	
	when function argument differs by constant and volatile i.e.,	void fun(int k);
																	void fun(const int k); *if instead of int we replace it by some volatile type like 
																						    a class name let it be test
																						    void fun(test k);
																						    void fun(const test k);
																						    then overloading is supported.
	
	when function argument differs by pointer and array i.e.,  void fun(int *ptr);
															   void fun(int arr[]);
	
	
	function overloading supports :
	when function argumnet differ by array dimension then overloading is supported. void fun(int arr[]);
																					void fun(int *arr[]);
																					
	
															
*/
#include<iostream>
using namespace std;
int sum(int, int);
float sum(int,float);
float sum(float,float);
float sum(float, int);
void sum (int);
	int sum(int num1, int num2){
		return num1 + num2;
	}
	
	float sum(int num1, float num2){
		return num1 + num2;
	}
	
	float sum(float num1, float num2){
		return num1 + num2;
	}
	
	float sum(float num1, int num2){
		return num1 + num2;
	}
	
	

main(){
	cout<<sum(3,5)<<"\n"<<sum(4,5.4f)<<"\n"<<sum(5.4f,5)<<"\n";
	//we used 5.4f f because c++ uses double as a default argument not float
	
}
/*
	function with default argument
	if we forget to pass arguments during function call then default argument will be used.
	default argument is provided at the time of function declaration and is done by the dev.
	
	int sum(int, int);
	main(){
	 
	 sum(); // here this will show compile time error becaus function call is not  satisfied byu function prototype
	 			thus we can use 
				int sum(int num1=72, int num2 = 34); at above declaration.
				note:- default value should be given from right to left otherwise it will show compile error
	}
	int sum(int a, int b){
	return a+b;
}
*/
