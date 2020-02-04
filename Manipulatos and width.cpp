/*manipulators: flags and function used with cout stream buffer

*/
#include<stdio.h>
#include<iostream>
#include<iomanip>//header for manipulator
using namespace std;
int main(){
	int num{4045};
	int num1{48};
	printf("%2d\n",num1);
	printf("%2d\n", num);
	printf("%4d\n",num);
	printf("%4d",num1);
	cout<<setw(5)<<endl<<num;
/*setw(int n) : here isn a positive number and specifies the size of output window and accordingly the number will be justified

*/
/*
    
	setw(int n): here n is a positive number and specifies the size of output window.
	If the value of n is 5, it means width of the output window is 5.
	
	In this example, value of num is 4045, comprises of 4 nos of character, ehich is less than n.
	When::
	length<width   -> output will be right justified.
	length>=width  -> output will be left justified(by default).
	here width is 5 length is 4.
	#include<iomanip>
	
	*/
	cout<<setw(10)<<endl<<setfill('*')<<num<<endl;// can be used to fill the space with any thing
	cout<<setbase(16)<<showbase<<num<<endl;  //heaxadecimal base division of integer
	cout<<setbase(8)<<showbase<<num<<endl;  //octadecimal base division of integer	number starting with 0 shows oct
	cout<<setbase(10)<<showbase<<num<<endl;  //decimal base division of integer 
	cout<<hex<<showbase<<num;  //heaxadecimal base division of integer 0x shows the base is 16  hex, oct are called flag and setbase() is function
	
	
	
	//char name[30];
	//char name1[30];
	//scanf("\n%s", name);
	//cout<<endl<<name;
	//scanf("%[^\n]s", name1); 
	//cout<<endl<<name1;
	/*c++ supports two different ways of string declaration as
	1- c style (maens character array or pointer) use #include<cstring>
	2- using string class part of std library*/
	string name;
	//cin>>endl>>name;
	//cout<<endl<<name;
	//multiword sting as input
	cout<<endl;
	getline(cin>>ws,name);//ws is a manipulator called wide space it will remove all the leading space before the string
	cout<<endl<<name;
}

