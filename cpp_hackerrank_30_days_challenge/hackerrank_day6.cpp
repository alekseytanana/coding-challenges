#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int T = 0;
    cin >> T;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    
    string *S = new string[T];
    
    for (int i=0; i != T; ++i) {
        S[i] = "";
        cin >> S[i];
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    
    for (int i = 0; i != T; ++i) {
        for (int j = 0; j < S[i].size(); j+=2)
            cout << S[i][j];
        cout << " ";
        for (int j = 1; j < S[i].size(); j+=2)
            cout << S[i][j];
        cout << endl;
    }
    
    delete[] S;
    
    return 0;
}
