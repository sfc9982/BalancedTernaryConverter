#include <bits/stdc++.h>

using namespace std;
#include "ternaryConverter.cpp"
#include "balancedConverter.cpp"


int main() {
    int input;
    cin >> input;
    
    vector<int> ternary = ternaryCon(input);
    vector<char> ans = balancedCon(ternary); 

    for (auto i: ans)
        cout << i;
}