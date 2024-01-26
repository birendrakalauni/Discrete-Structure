#include<iostream>
using namespace std;
int main()
{
	int n1,n2,a[20],b[20],i,j,k=0;
	int intersection[40]; 
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
	 // Find the intersection of setA and setB
    for (i = 0; i < n1; i++)
	 {
        for (j = 0; j < n2; j++) 
		{
            if (a[i] == b[j])
		    {
                // Element from setA is also in setB, add it to the intersection
                intersection[k++] = a[i];
                break; // Move to the next element in setA
            }
        }
    }
     // Display the intersection
    if (k== 0) 
	{
        cout << "Intersection of setA and setB is empty." << endl;
    } 
	else 
    {
        cout << "Intersection of setA and setB: ";
        for (i=0; i<k; i++) 
		{
            cout << intersection[i] << " ";
        }
        cout << endl;
    }

    return 0;
}

