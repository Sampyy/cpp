#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

int n = 5;
int m = 3;
int o;
multiset<long long, greater<long long>> tickets;

int main() {
    cin >> n;
    cin >> m;

    for (int i = 0; i < n; i++) {
        cin >> o;
        tickets.insert(o);
    }

    for (int i = 0; i < m; i++) {
        cin >> o;
        auto price = tickets.lower_bound(o);
        if (price == tickets.end()) {
            cout << -1 << "\n";
        } else {
            cout << *price << "\n";
            tickets.erase(price);
        }
    }

    /*for (int i = 0; i < n; i++) {
        cin >> o;
        tickets.push_back(o);
    }

    sort(tickets.begin(), tickets.end());

    for (int i = 0; i < m; i++) {
        int off;
        cin >> off;
        bool found = false;
        for (int j = n-1; j >= 0; j--) {
            if (off >= tickets[j] && tickets[j] > 0) {
                cout << tickets[j] << "\n";
                tickets[j] = 0;
                found = true;
                break;
            }
        }
        if (found == true) {
            continue;
        }
        cout << "-1" << "\n";
    }*/


 }