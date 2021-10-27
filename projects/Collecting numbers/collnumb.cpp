#include <iostream>
#include <chrono>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int positions[200001];
int n, x,c;

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> x;
        positions[x] = i;
    }

    x = 0;
    c = 1;
    while (c <= n) {
        for (int i = c; i <= n; i++) { 
            c++;
            if (positions[i] > positions[i+1]) {
                break;
            }
           
        }
        x++;
    }
    cout << x;
}

// 3 1 2 4
// 0 2 3 1 4