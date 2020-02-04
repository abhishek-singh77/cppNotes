//class triangle
#include<iostream>
#include<cmath>
//function overloading concept in class
using namespace std;
class triangle{
	public:
		double area (double,double);
		double area (double, double, double);
};
double triangle::area(double num1, double num2){
	double area1;
	area1=(num1*num2)/2;
	return area1;
}
double triangle::area(double s1, double s2, double s3){
	double area1;
	double s= (s1+s2+s3)/3;
	area1=sqrt(s*(s-s1)*(s-s2)*(s-s3));
	return area1;
}
main(){
	triangle t;
	cout<<	t.area(4.5,4.4)<<"\n"<<t.area(4.4,4.2,4.4)<<"\n";
}

