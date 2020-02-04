//STATTIC DATA MEMBER and DATA FUNCTION
#include<iostream>
using namespace std;
class Test{
	//non static data member are instance variable
	int num1;
	static int num2; // internal declaration 
	public:
		 static float f;
};
//External declaration
int Test::num2 = 78; //according to c++98 we cannot intialize data member inside the class. but in c++11 we can only intialise non static 
//varibales in class. therefore we initialised the static varible outside the class. if it was public then we can initialise in main()
float Test::f; // we can intialise it in the main()
int main(){
	//obj is an instance of class test
	Test obj, obj2, obj3;
	Test::f = 4.5;
	/* WHEN ONE OR MULTIPLE OBJECTS OF A CLASS IS CREATED THEN ALL OBJECTS GET INDIVIDUAL  COPY FOR EACH
	OBJECT i.e, each objecgt will have diffrent address &obj.num1 != &obj.num2
	but static is a shared memory which will have the same memory and will be allocatefd memory by external declaration
	and is called onlhy by using class only where as num1 can be called using object only.
	
	external declaration is done as int Test::num2;
  	*/
  	/*
  	objects of class is created at run time thats why non static data member gets memory at runtime where as static data member gets memory from the 
  	shared section and is shared among all the objects of a class. therefore static variable gets memory during compilation
  	
  	so the size of the object is eual to the sizeof all non static data member.
	*/
	cout<<sizeof(obj)<< " "<<sizeof(obj2)<<" "<<sizeof(obj3);
	//cout<<Test::num2;//compile time error because num2 is private
	cout<<" "<<Test::f;
	
}
