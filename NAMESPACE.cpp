//NAMESPACE
/* 
int num = 67;
int main(){
int num = 90;
{
		int num = 89;
}
cout<<num:
}


in above num = 90 will be printed if in c code, becauuse local variable is given more preference.
num = 89 will get eliminated automatically af6er the bracket is closed.

Namespace keyword helps in executing all of the above values of num;
*/
#include<iostream>
using namespace std;
namespace A{
int num = 67;
}
namespace B{
int num = 90;
}
int main(){

		int num = 89;
cout<<A::num;
A:: num = 78;
cout<<"\n"<<A::num;
cout<<"\n"<<B::num;
cout<<"\n"<<num;
}

