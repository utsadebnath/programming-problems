#include <iostream>
#include <cmath>
using namespace std;
 
int main() {
    int matrix[5][5];
    int x, y;
 
    // Reading the 5x5 matrix and locating the position of "1"
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            cin >> matrix[i][j];
            if (matrix[i][j] == 1) {
                x = i + 1;  // Row position of "1" (1-indexed)
                y = j + 1;  // Column position of "1" (1-indexed)
            }
        }
    }
 
    // Calculate the number of moves needed to bring "1" to position (3, 3)
    int moves = abs(3 - x) + abs(3 - y);
    cout << moves << endl;
 
    return 0;
