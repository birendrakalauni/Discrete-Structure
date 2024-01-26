 #include<iostream>
using namespace std;
int main()
{
	int n1,n2,a[5],b[5],i,j,k=0;
	int product[25][2]; 
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
	 // Calculate the Cartesian product
    for (i = 0; i < n1; i++)
    {
        for (j = 0; j < n2; j++) 
		{
            product[k][0] = a[i];
            product[k][1] = b[j];
            k++;
        }
    }
    // Display the Cartesian product
    cout << "Cartesian Product:\n";
    for (i = 0; i < k; i++) {
        cout << "(" << product[i][0] << ", " << product[i][1] << ")\n";
    }

    return 0;
}
