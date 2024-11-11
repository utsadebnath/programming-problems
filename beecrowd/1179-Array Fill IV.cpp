#include <bits/stdc++.h>
using namespace std;

int main() {
    int number[15];
    int par[5], impar[5];
    int par_count = 0, impar_count = 0;

    // Read 15 numbers
    for (int i = 0; i < 15; i++) {
        cin >> number[i];

        if (number[i] % 2 == 0) { // Even number
            par[par_count++] = number[i];
            if (par_count == 5) { // Print and reset when par array is full
                for (int j = 0; j < 5; j++) {
                    cout << "par[" << j << "] = " << par[j] << endl;
                }
                par_count = 0;
            }
        } else { // Odd number
            impar[impar_count++] = number[i];
            if (impar_count == 5) { // Print and reset when impar array is full
                for (int j = 0; j < 5; j++) {
                    cout << "impar[" << j << "] = " << impar[j] << endl;
                }
                impar_count = 0;
            }
        }
    }

    // Print remaining elements in impar array (odds first)
    for (int i = 0; i < impar_count; i++) {
        cout << "impar[" << i << "] = " << impar[i] << endl;
    }

    // Print remaining elements in par array (evens last)
    for (int i = 0; i < par_count; i++) {
        cout << "par[" << i << "] = " << par[i] << endl;
    }

    return 0;
}
