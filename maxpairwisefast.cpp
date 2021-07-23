#include<iostream>
//#include<stdlib>//for testing
#include<vector>
using namespace std;
/*//pevious program having extra runtime and error for large values

long long maxpair(const  vector<int>&number)
{
	long long result=0;
	int n=number.size();
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)//run time delay due to ON^2
		{
			if(((long long)number[i])*number[j]>result){
			
			result=((long long)number[i])*number[j];
		}}
	}
	return result;}
*/

long long maxpairproductfast(const vector<int>&number)

{
	int n=number.size();
	
	int index_a=-1;
	for(int i=0;i<n;++i)
	
		if( index_a==-1 || number[i]>number[index_a])
		{
			index_a=i;
		}
	
	
	int index_b=-1;
	for(int j=0;j<n;j++)//two for looped helped in decreasing runtime ON+ON.
	{
		if((j!=index_a) && (index_b==-1 || number[j]>number[index_b] )){
			index_b=j;
		}
	}
	return(((long long)number[index_a])*number[index_b]);
	
}

int main()
{
	int n;
	cin>>n;
	std::vector<int>number(n);
	for(int i=0;i<n;i++)
cin>>number[i];

long long result=maxpairproductfast(number);
cout<<result;
return 0;
}
