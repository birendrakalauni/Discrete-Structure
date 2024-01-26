#include <iostream>
using namespace std;

int main() {
    int n, r;
    long long f1 = 1, f2 = 1; // Use long long to handle larger values
    long long p;

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

    // Calculate the permutation
    p = f1 / f2;

    cout << "Permutation, p(n,r) = " << p << endl;

    return 0;
}
/*This code calculates the permutation P(n, r) correctly
 by first computing the factorials of n and (n - r), and then dividing them.*/
