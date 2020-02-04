//pass a function to another function as an argument
#include<iostream>
using namespace std;
int sum(int num1,int num2){
	return num1+num2;
}
void result(int num1, int num2, int(*fptr)(int,int)){//it has three argument the thirs argument is pointer to a function
	
	cout<<fptr(num1,num2);
}
int main(){
	int num1{40};
	int num2{30};
	result(num1,num2,sum);
	cout<<'\n'<<sum(num1,num2);
}
