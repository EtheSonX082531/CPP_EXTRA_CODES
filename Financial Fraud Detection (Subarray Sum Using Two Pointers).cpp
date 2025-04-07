#include <bits/stdc++.h>
using namespace std;

bool hasSubarrayWithSum(vector<int>& transactions, int target) {
    int n = transactions.size();
    if (n == 0) return false;
    
    int left = 0;
    long long currSum = 0;  // Using long long to handle large sums
    
    for (int right = 0; right < n; right++) {
        currSum += transactions[right];
        
        while (currSum > target && left <= right) {
            currSum -= transactions[left];
            left++;
        }
        
        if (currSum == target) {
            return true;
        }
    }
    
    return false;
}

int main() {
    int n, target;
    
    // Get array size from user
    cout << "Enter the number of transactions: ";
    cin >> n;
    
    // Edge case handle for input
    if (n < 0) {
        cout << "Size cannot be negative!" << endl;
        return 1;
    }
    
    // Creating a vector with user-specified size
    vector<int> transactions(n);
    
    // Getting array elements from user
    cout << "Enter " << n << " transaction amounts:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Transaction " << i + 1 << ": ";
        cin >> transactions[i];
    }
    
    // Getting target sum from user
    cout << "Enter the target sum to detect: ";
    cin >> target;
    
    // Check for subarray with target sum
    bool result = hasSubarrayWithSum(transactions, target);
    
    // Output result
    if (result) {
        cout << "Yes, there exists a contiguous sequence of transactions "
             << "that sums to " << target << endl;
    } else {
        cout << "No contiguous sequence of transactions sums to " 
             << target << endl;
    }
    
    return 0;
}
