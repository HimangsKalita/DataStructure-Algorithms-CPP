#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    int size = 2 * n - 1;
    
    for (int i = 0; i < size; ++i) {
        string row;
        for (int j = 0; j < size; ++j) {
            int min_dist_i = size - 1 - i;
            int min_dist_j = size - 1 - j;
            int min_val = min(min(i, j), min(min_dist_i, min_dist_j));
            row += to_string(n - min_val);
        }
        cout << row << endl;
    }
    
    return 0;
}