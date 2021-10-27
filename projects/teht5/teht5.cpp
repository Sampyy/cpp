#include <iostream>
#include <chrono>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int n;
long long s, e;
int o;
vector<pair<long long, long long>> movies;

int main() {

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >>s >> e;
        movies.push_back({e, s});
    }
    long long totalMovies = 0;
    sort(movies.begin(), movies.end());
    long long lastEnd = 0;
    for (int i = 0; i < n; i++) {

        if (lastEnd <= movies[i].second) {
            totalMovies++;
            lastEnd = movies[i].first;
        }
    }

    cout << totalMovies;
    /*ifstream f("test_input.txt");
    cin >> n;
    //f >> n;

    for (int i = 0; i < n; i++) {
        cin >> s >> e;
        //f >> s >> e;
        long long length = e - s;
        //cout << "pair: " << s << ", " << length << endl;
        auto it = movies.find(s);
        //cout << it-> first << endl << it-> second << endl;
        if (it == movies.end()) {   
            movies.insert(pair<long long, long long>(s, length));
        }
    }
    auto start = chrono::steady_clock::now();
    long long nextPos = 0;
    long long totalMovies = 0;
    map<long long, long long>::iterator it=movies.begin();
    while (it != movies.end()) {
        auto first = it->first;
        //cout << "first:" << first << " nextpos " << nextPos;
        if (first<nextPos) {
            //cout << "täällä";
            it++;
            //cout << endl << (it == movies.end()) << endl ;
            continue;
        }
        auto currPos = it;
        long long timeToGoTo = it-> first + it -> second;
        //cout << endl << "first: " << it-> first << " second: " << it->second << endl;
        //cout << "time to go to: " << timeToGoTo << endl;
        nextPos = timeToGoTo;
        while(it->first < timeToGoTo) {
            
            if (it->first + it->second < nextPos) {
                nextPos = it->first;
            }
            //cout << "while loop, first: " << it-> first << " second: " << it-> second << " nextPos: " << nextPos << endl;
            it++;
        }
        it = currPos;
        if (nextPos == timeToGoTo) {
            totalMovies++;
        }
        //cout << "start: " << it->first << " length: " << it->second << " movies: " << totalMovies << endl << "-----------------------------" << endl;
    }
    cout << "total" << totalMovies;
    auto enda = chrono::steady_clock::now();
    auto diff = enda-start;
    cout << endl << chrono::duration <double, milli> (diff).count() << " ms" << endl;*/



 }