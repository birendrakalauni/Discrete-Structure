//Union and Intersection of two sets
#include<iostream>
using namespace std;
int main()
{
	int n1,n2,a[20],b[20],i,j;
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
	// Merge setB elements into setA if they are not already in setA
    for (i = 0; i < n2; i++)
	 {
        for (j = 0; j < n1; j++) 
		{
            if (b[i] == a[j]) 
			{
                break;
            }
        }
        if (j == n1) 
		{
            a[n1++] = b[i];
        }
      }
	// Display the union (setA after merging setB elements)
    cout << "Union of setA and setB: ";
    for (int i = 0; i < n1; i++) 
	{
        cout << a[i] << " ";
    }
    cout << endl;
    
     for (i = 0; i < n1; i++)
	  {
        for (j = 0; j < n2; j++) 
		{
            if (a[i] == b[j])
			 {
			 	if (j==n2)
			 	{
                intersection[n2++] = a[i];
                break;
                }
            }
        }
    }
     // Display the intersection
    cout << "Intersection of setA and setB: ";
    for (i = 0; i <n2; i++) {
        cout << intersection[i] << " ";
    }
    cout << endl;
return 0;	
}
