#include <bits/stdc++.h>
using namespace std;
#define fastIO() ios::sync_with_stdio(0); cin.tie(0); // Macro to optimize input/output speed

// Function to merge two sorted arrays into a single sorted array
int mergeSort(int n, int m, int a[], int b[], int mergeArray[])
{
    int i = 0, j = 0, k = 0; // i: index for array a, j: index for array b, k: index for merged array
    // Compare elements from both arrays and merge them in sorted order
    while (i < n && j < m)
    {
        if (a[i] <= b[j])
        {
            mergeArray[k] = a[i];
            i++;
        }
        else
        {
            mergeArray[k] = b[j];
            j++;
        }
        k++;
    }

    // Copy remaining elements of array a, if any
    while (i < n)
    {
        mergeArray[k] = a[i];
        k++;
        i++;
    }
    // Copy remaining elements of array b, if any
    while (j < m)
    {
        mergeArray[k] = b[j];
        k++;
        j++;
    }
    return 0; // Return 0 to indicate successful merge
}

// Function to print the merged array
void printArray(int mergeArray[], int size) {
    for(int i = 0; i < size; i++){
       cout << mergeArray[i] << " ";
    }
    return;
}

int main()
{
    fastIO(); // Enable fast input/output
    int n, m;
    cout << "Enter the first Sales_Figure size:" << endl;
    cin >> n;
    cout << "Enter the second Sales_Figure size:" << endl;
    cin >> m;
    int a[n], b[m]; // Variable-length arrays for first and second sales figures
    cout << "Enter first Sales_Figure elements:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Enter second Sales_Figure elements:" << endl;
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    int mergeArray[n + m]; // Array to store merged result
    mergeSort(n, m, a, b, mergeArray); // Call merge function
    cout << "After Merging Two Given Sales_Figures:" << endl;
    printArray(mergeArray, n + m); // Print the merged array
    return 0;
}
