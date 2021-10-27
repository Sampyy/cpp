#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    string output = "";
    long long x;
    cin >> x;
    cout << x;
    
    while(true) {
        if (x == 1 || x < 0) {
            break;
        }
        if (x%2 == 0) {
            x /= 2;
            cout << " ";
            cout << x;    
            continue;
        }
        else {
            x = x*3+1;
            cout << " ";
            cout << x;
        }
    }
 }