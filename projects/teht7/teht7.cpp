#include <iostream>
#include <chrono>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int n;
long long s, e;
int o;
vector<pair<long long, long long>> times;

int main() {

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >>s >> e;
        times.push_back({e, s});
    }
    long long totalRooms = 0;
    sort(times.begin(), times.end());
    long long lastEnd = 0;
    for (int i = 0; i < n; i++) {
        if (lastEnd < times[i].second) {
            totalRooms++;
            lastEnd = times[i].first;
        }
    }

    cout << totalRooms;
}