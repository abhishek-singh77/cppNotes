/*reference variable


there are three types of variable in c++
normal variable - flaot f = 2.4;
pointer variable - int *ptr=NULL;   //pointer can be initialised as null
					ptr= &NUM;
					
REFERENCE  VARIABLE:-
int num = 90;    // reference varibale need to be initalised while declaration  and r value must be an identifier name not a constant
int &ref = num;     	means int &ref = 20 will give compile time error

Meaning of reference varible is refering someone else in above example ref is reffering num i.e., ref is an alias of num
it means the ref variable doesn't get any extra memory it works with same memory space it is reffering.

*/
#include<iostream>
using namespace std;
int main(){
	int num = 89;
	int &ref = num;
	cout<<&ref<<" "<<&num<<"\n";
	cout<<ref<<" "<<num;
	ref = 70;//ref value is changed and so the value of num is changed 
			 // we can say its the other name given to the num variable.
	cout<<"\n"<<num;
	
}
