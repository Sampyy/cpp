#include <iostream>
#include <string>
#include <set>
#include <algorithm>

using namespace std;

set<string> v;



void printStrings(string pos[], int k, int n, string curr[]) {
   
    if (n > k) {
        return;
    }
    
    for(int i = n; i < k ; i++) {
        
        string newString[8] ;
        for (int i = 0; i < k; i++) {
            newString[i] = curr[i];
        }
        /*cout << "newstring: " ;
        for (int i = 0; i < k; i++) {
            cout << newString[i];
        }
        cout << " ----- ";*/
        string placeholder = curr[n];
        newString[n] = curr[i];
        newString[i] = placeholder;
        /*for (int i = 0; i < k; i++) {
            cout << newString[i];
        }*/
        string word = newString[0];
        for (int i = 1; i < k; i++) {
            word += newString[i];
        }
        v.insert(word);
        //cout << "\n";
        printStrings(pos, k, n+1, newString);
    }
}


int main() {
    
    string input;
    cin >> input;
    string pos[8];
    int k = input.size();
    for (int i = 0; i < k; i++) {
        pos[i] = input[i];
    } 
    string curr[8];
    
    printStrings(pos, k, 0, pos);
    cout << v.size() << "\n";
    
    for (auto x: v) {
        cout << x << "\n";
    }
}
