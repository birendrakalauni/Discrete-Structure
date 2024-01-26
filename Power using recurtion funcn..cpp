#include<iostream>
using namespace std;
int power(int a, int n);
int main()
{
	int a,n,result;
	cout<<"Enter the base number: ";
	cin>>a;
	cout<<"\nEnter power number: ";
	cin>>n;
	result=power(a,n);
	cout<<a<<"^"<<n<<" = "<<result<<endl;
	return 0;
}
	int power(int a, int n)
	{
		if (n==0)
		{
			return 1;
		}
		else
		{
			return (a*(power(a,n-1)));
		}
	}

