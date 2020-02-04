/*
Manipulators
setprecision(unsigned int n) : it set the decimal place upto a given position, it work in combination with following flags:
															
															fixed - it will print like a rational number
															scientific - it will print a float point number in exponential format
															
*/
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	//float supports upto 6 decimal place , double supports upto 13 decimal place
	float f = 8.945f;
	double d= 3.45;
	//using setprecision(10) we can change the range of decimal places for float and double data type
	cout<<f<<" "<<d;
	cout<<fixed<<setprecision(10)<<'\n'<<f<<" "<<d;

}
