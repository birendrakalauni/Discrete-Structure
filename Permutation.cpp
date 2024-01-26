#include<iostream>
using namespace std;
int main()
{
	int n,r;
	long long f1 = 1,f2 = 1;
	long long p;
	cout<<"Enter the value of n and r : ";
	cin>>n>>r;
	int i;
	for (i=1;i<=n;i++)
	{
		f1=f1*1;
	}
	for (i=1;i<=(n-r);i++)
	{
		f2=f2*1;
	}
	p=f1/f2;
	cout<<"Permutation = "<<p<<endl;
	return 0;
}
