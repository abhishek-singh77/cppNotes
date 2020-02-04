//class employee with member name, emp_no, deppt, salary
#include<iostream>
using namespace std;
class Employee{
	int emp_no;
	int deppt;
	int salary;
	public:
		inline void setdeppt(int n1);
		inline int getdeppt();
		inline void setemp_no(int eno);
		inline int getemp_no();
};
void Employee::setdeppt(int n1){
	deppt=n1;
}
int Employee::getdeppt(){
	return deppt;
}
void Employee::setemp_no(int eno){
	emp_no=eno;
}
int Employee::getemp_no(){
	return emp_no;
}
int main(){
	Employee a1;
	a1.setemp_no(11912469);
	a1.setdeppt(234);
	cout<< a1.getdeppt()<<"\n"<< a1.getemp_no();
}
