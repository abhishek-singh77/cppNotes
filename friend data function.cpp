//member function as friend
//Friend class
/*when we make a class freind to another clss then all member functions o friend can access private data of the class in which it is friend

*/
/*
suppose we havae two class A and B. B is a friend of class A. it means all member function of class B can access private data member of class A
but note A can't access private member of class B the friendship is not mutual*/

#include<iostream>
using namespace std;
class Storage;//forward declaration
class Access{
	public:
			void setVal(int k, Storage &obj);

		};


class Storage{
	int val{90};
public:
	friend void Access::setVal(int k,Storage &obj);
	//only this function is allowed to access private data of storage	
	int getVal(){
		return val;
	}
};

		
		
	void Access::setVal(int k, Storage &obj){
			obj.val = k; //friend member function is not to be declared out side os the class
		
}


int main(){
	Storage obj1;
	Access obj2;
	
	obj2.setVal(100,obj1);
	obj1.getVal();
}

