#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    long x;
    long index = 0;
    long long moves = 0;
    
    long long arr[200000];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[i-1] ) {
            long long change = arr[i-1] - arr[i];
            arr[i] = arr[i] + change;
            moves = moves + change;
        }   
    }
    cout << moves;
    

 }