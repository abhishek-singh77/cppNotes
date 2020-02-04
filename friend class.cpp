//Friend class
/*when we make a class freind to another clss then all member functions o friend can access private data of the class in which it is friend

*/
/*
suppose we havae two class A and B. B is a friend of class A. it means all member function of class B can access private data member of class A
but note A can't access private member of class B the friendship is not mutual*/

#include<iostream>
using namespace std;
class Access;//forward declaration

class Storage{
	int val{90};
public:
	friend class Access; //class access is friend of storage
};

class Access{
	public:
		void setVal(int k, Storage &obj){
			obj.val = k;
		}
		int getVal(Storage &obj){
			return obj.val;
		}
	
};


int main(){
	Storage obj1;
	Access obj2;
	
	obj2.setVal(100,obj1);
	cout<<obj2.getVal(obj1);
	
}

