#include<iostream>
using namespace std;
int main()
{
	int n1,n2,a[20],b[20],i,j,k=0;
	int difference[40]; 
	cout<<"Enter the no. of elements of setA: ";
	cin>>n1;
	cout<<"Enter elements of setB: ";
	for (i=0;i<n1;i++)
	{
	cin>>a[i];	
	}
	cout<<"Enter no. of elements of setB: ";
	cin>>n2;
	cout<<"Elements of setB: ";
	for (i=0;i<n2;i++)
	{
		cin>>b[i];
	}
	 // Find the difference (setA - setB)
    for (i = 0; i < n1; i++) 
	{
        for (j = 0; j < n2; j++) 
		{
            if (a[i] == b[j]) 
			{
                break;
            }
        }
        if (j == n2) 
		{
            difference[k++] = a[i];
        }
    }

    // Display the difference
    if (k== 0) 
	{
        cout<< "The difference (setA - setB) is empty." << endl;
    } 
	else 
	{
        cout << "Difference of setA and setB (setA - setB): ";
        for (i = 0; i < k; i++) 
		{
            cout << difference[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
