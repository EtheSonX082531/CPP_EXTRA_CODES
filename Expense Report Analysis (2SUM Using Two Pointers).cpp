#include<bits/stdc++.h>
using namespace std;
#define fastIO() ios::sync_with_stdio(0); cin.tie(0); // Optimizes input/output operations

int main()
{
    fastIO();
    int n, sum;
    cout << "Enter the size of Array:" << endl;
    cin >> n;
    vector<int> expenseAmounts(n); // Creates a vector of size n to store expenses
    cout << "Enter all Amounts here:" << endl;
    for(int i = 0; i < n; i++) {
        cin >> expenseAmounts[i];
    }
    cout << "Enter the target sum value:" << endl;
    cin >> sum;
    int start = 0, end = n-1; // Two pointers: start from beginning, end from last index
    while(start < end) {
        if(expenseAmounts[start] + expenseAmounts[end] == sum) { // Check if current pair sums to target
            cout << "Distinct expenses are found!" << endl;
            cout << "Indices: " << start << "," << end << endl;
            return 0;
        }
        else if(expenseAmounts[start] + expenseAmounts[end] < sum) {
            start++; // Move start pointer right if sum is too small
        }
        else {
            end--; // Move end pointer left if sum is too large
        }
    }
    cout << "Distinct expenses are not found!" << endl;
    return 0;
}
