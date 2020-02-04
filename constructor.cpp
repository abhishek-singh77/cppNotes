//CONSTRUCTOR
/* it is a special memnber function which has the name of the class name

it doesn't return any value  means we should not write any type name before constructor name it also mean we should not return statement 
inside the constructor
its gets called automatically when we create an object of a class

*/
#include<iostream>
using namespace std;
class Sample{
public:
	int a ,b;
	
	//parameters or default constructor
	Sample(){
		cout<<"From Constructor";
	}
	Sample(int n1, int n2){
		a=n1;
		b=n2;
	}
	void printdata(){
		cout<<"\n"<<a<<" "<<b;
	}

};

int main(){
	Sample obj;//it will call default or parameterless
	Sample obj2(4,5);//it will call parameterised constructor
	obj.printdata();
	obj2.printdata();
	
}
