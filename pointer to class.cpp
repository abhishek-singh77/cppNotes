//pointer to class object
#include<iostream>
using namespace std;
class Test{
	int num;
	public:
		void setNum(int a){
			num=a;
		}
		int getNum()const{// const here will help in a way that if someone updates the value of data member num here then it won't change
			return num;
		}
};
int main(){
	Test obj;
	Test *ptr{nullptr};
	ptr=&obj;


ptr->setNum(90);//arrow(->) operator is required to call member function using pointer of a class
cout<<ptr->getNum();
}
