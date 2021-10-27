#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n, x;
vector<long long> numbers;


int main() {
    cin >> n;

    long long value = 1;
    for (int i = 0; i < n; i++) {
        cin >> x;
        numbers.push_back(x);
    }
    sort(numbers.begin(), numbers.end());
    for (int i = 0; numbers[i] <= value && i < n ; i++) {
        value += numbers[i];
    }

    cout << value;

    
}