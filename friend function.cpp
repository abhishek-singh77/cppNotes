//FRIEND FUNCTION AND CLASS
/*
GLOBAL FUNCTION: Functions like c, means function declared and defined outside of all blocks{} this type of fucntion as file scope

void fun();

*/
#include<iostream>
using namespace std;
class A{
int val{32};
string name{"Rahul"};
//this class dont have any data function so we're going to access it using friend function by declaring the global function as friend funtion
public:
	friend void printA(A &obj);  // defining the object for getting access to the this pointer
	int getVal(){
		return val;
	}
};
void printA(A &obj){//this we'll use as friend function by using friend keyword in the  class 
	// its a global function
	cout<<obj.val<<"\n"<<obj.name;// the draw back of this is anyone frie d can change the value of private data member of the class
	obj.val = 90;//update the value of data member 
	
}

int main(){
	A obj;
	printA(obj);
	cout<<endl<<"After Friendf function call:: "<<obj.getVal();

}
