//array decay problem
/*

*/
#include<iostream>
using namespace std;
void fun(int num[]){
	
	cout<<'\n'<<"Inside Function::"<<sizeof(num);
	int *ptr;
	cout<<"\n"<<sizeof(ptr);
}
void fun1(int (&num)[4]){
	
	cout<<'\n'<<"Inside Function::"<<sizeof(num);
}
int main(){
	int num[]{2,3,4,5}; //no assignment operator is needed since c++11  known as uniform initalization
	/*int k{5}; etc we can now initialise wihtout using assignment operator*/
	
// int num[] = {1,2,3,4,5} is called copy operation  
	cout<<sizeof(num);
	cout<<num<<" "<<&num[0];
	fun(num);
	fun1(num);
}
