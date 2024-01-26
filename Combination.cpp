#include <iostream>
using namespace std;

int main() 
{
    int n, r;
    long long f1 = 1, f2 = 1, f3 =1; // Use long long to handle larger values
    long long C;

    cout << "Enter the value of n and r: ";
    cin >> n >> r;

    // Calculate n!
    for (int i = 1; i <= n; i++) {
        f1 = f1 * i;
    }

    // Calculate (n - r)!
    for (int i = 1; i <= (n - r); i++) {
        f2 = f2 * i;
    }
    for (int i=1; i<=r; i++)
    {
    	f3= f3 * i;
	}

    // Calculate the combination
    C = f1/(f2 * f3);

    cout << "Combination = " <<C<< endl;

    return 0;
}
