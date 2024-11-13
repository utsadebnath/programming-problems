#include <bits/stdc++.h>
using namespace std;

// Function to compute GCD using Euclidean algorithm
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int t;
    cin >> t; // Read number of test cases
    while (t--) {
        int n1, n2;
        cin >> n1 >> n2; // Read the number of cards Richard and Vincent have
        int res = gcd(n1, n2); // Compute the GCD of n1 and n2 using custom function
        cout << res << endl; // Output the result
    }
    return 0;
}

