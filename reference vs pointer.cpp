//rerference variable continued
#include<iostream>
using namespace std;
/*int main(){
	int *ptr;
	int num=20;
	ptr = &num;
	int &ref= num;
	cout<<*ptr<<" "<<ref; //with pointer dereferencing operator is required (*) to get the value of a varible but with ref its not required
	
}*/
/*
int main(){
	int num = 90;
	int num2=100;
	int *ptr;
	ptr = &num;
	ptr = &num2;
	&ref = num;
	&ref = num2; // this line will raise a compile time errror because ref can't be assigned to different identifier
}
*/
void swap(int num1, int num2){
	int temp = num1;
	num1 = num2;
	num2=temp;
	cout<<"From Function ::"<<endl;
	cout<<"Num1 ::"<<num1<<" "<<"Num2 ::"<<num2;
}
void swapPointer(int *ptr1, int *ptr2){
	int temp= *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;
	cout<<endl<<"From Function swapPointer ::"<<endl;
	cout<<"Num1 ::"<<*ptr1<<" "<<"Num2 ::"<<*ptr2;
	
}
void swapRef(int ref1, int ref2){
	int temp =  ref1;
	ref1 = ref2;
	ref2 = temp;
	cout<<endl<<"From Function swapRef ::"<<endl;
	cout<<"Num1 ::"<<ref1<<" "<<"Num2 ::"<<ref2;

}
int main (){
	int num1 = 90;
	int num2 = 100;
	swap(num1, num2);//call by value
	cout<<"\n"<<"AFTER SWAPPING"<<endl;
	cout<<"Num1 ::"<<num1<<" "<<"Num2 ::"<<num2;
	
	
	swapPointer(&num1, &num2);// cal by pointer
	cout<<endl<<"From main method after swapPointer :: "<<endl;
	cout<<"Num1 ::"<<num1<<" "<<"Num2 ::"<<num2;
	
	
	swapRef(num1, num2);//call by reference
	cout<<endl<<"From main method after swapRef :: "<<endl;
	cout<<"Num1 ::"<<num1<<" "<<"Num2 ::"<<num2;
	
}
 
