#include <iostream>
#include <vector>
#include <algorithm>
#include <deque>
using namespace std;



int main() {
    bool children[200001];
    int k;
    cin >> k;
    int left = k;
    bool next = false;
    vector<pair<int,int>> v;
    deque<int> q;

    for (int i = 1; i <=k ;i++) {
        q.push_back(i);
    }

    while (left > 0) {
        int curr = q.front();
        q.pop_front();
        switch(next){
            case true:
                cout << curr << " ";
                next = false;
                left--;
                break;

            case false:
                next = true;
                q.push_back(curr);

        }
        
    }


/*
    /*for (int i = 1; i < k; i++) {
        v.push_back({i, i+1});
        
    }
    v.push_back({k, 1});*/
    /*for (int i = 0; i < v.size(); i++) {
        cout << "first: " << v[i].first << " second: " << v[i].second << "\n";
    }*/
    //int current = 1;
    /*while (left > 0) {
        /*for (int i = 1; i <= k; i++) {
            if (next == true && children[i] == false) {
                cout << i << " " ;
                children[i] = true;
                next = false;
                left --;
            }
            if (children [i] == false && next == false) {
                next = true;
            }
        }*/
        /*for (int i = 1; i <= k; i++) {
            if (next == true) {
                cout << i << " ";
                next = false;
                left --;
                v.erase(v.begin() + i);
            }
            if (next == false) {
                next = true;
            }
        }
        /*for (int i = 0; i < v.size(); i++) {
        //cout << "first: " << v[i].first << " second: " << v[i].second << "\n";
    }
        //cout << "current" << current << " second " << v[current].second << "\n";
        /*if (next == true) {
            
            next = false;
            left --;
            for (int i = 0; i < v.size(); i++) {
                if (v[i].second == v[current-1].first) {
                    v[i].second = v[current-1].second;
                    continue;
                }
            }
            cout << current << " ";
            current = v[current-1].second;
        }
        if (next == false) {
            current = v[current-1].second;
            next = true;
        }*/
    }


