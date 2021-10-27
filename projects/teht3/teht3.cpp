#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> firstSet;
vector<int> secondSet;

int main() {
    long long sum = 0;
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    if (sum%2 != 0) {
        cout << "NO";
    }
    else if (n == 2) {
        cout << "NO";
    }

    /*else if (n%2 == 0) {
        for (int i = 1; i < n; i+= 2){
            firstSet.push_back(n+1-i);
            secondSet.push_back(i);
        }
        cout << "YES\n";
        cout << firstSet.size() << "\n";
        for (int i = 0; i < (int) firstSet.size(); i++) {
            cout << firstSet[i] << " ";
        }
        cout << "\n";
        cout << secondSet.size() << "\n";
        for (int i = 0; i < (int) secondSet.size(); i++) {
            cout << secondSet[i] << " ";
        }
    }*/

    else if (n%2 == 0) {
        int help = 1;
        for (int i = n; i > 0; i--) {
            if (help < 2) {
                firstSet.push_back(i);
                help++;
            } else {
                secondSet.push_back(i);
                help++;
                if (help > 3) {
                    help = 0;
                }
            }
        }
        cout << "YES\n";
        cout << firstSet.size() << "\n";
        for (int i = 0; i < (int) firstSet.size(); i++) {
            cout << firstSet[i] << " ";
        }
        cout << "\n";
        cout << secondSet.size() << "\n";
        for (int i = 0; i < (int) secondSet.size(); i++) {
            cout << secondSet[i] << " ";
        }
    }
    else {
        sum /= 2;
        bool used[1000000] = {false};

        for (int i = n; i > 0; i--) {
            if (sum > i) {
                firstSet.push_back(i);
                used[i] = true;
                sum -= i;
            }
            else {
                firstSet.push_back(sum);
                used[sum] = true;
                break;
            }

            
        }
        cout << "YES\n";
        for (int i = 1; i <= n; i++) {
            if (used[i] == 0) {
                secondSet.push_back(i);
            }
        }

        cout << firstSet.size() << "\n";
        for (int i = 0; i < (int) firstSet.size(); i++) {
            cout << firstSet[i] << " ";
        }
        cout << "\n" << secondSet.size() << "\n";
        for (int i = 0; i < (int) secondSet.size(); i++) {
            cout << secondSet[i] << " ";
        }
    } 
 }