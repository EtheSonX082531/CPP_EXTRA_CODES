#include <bits/stdc++.h>
using namespace std;

int mergeSort(int n, int m, int a[], int b[], int mergeArray[])
{
    int i = 0, j = 0, k = 0;
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

    while (i < n)
    {
        mergeArray[k] = a[i];
        k++;
        i++;
    }
    while (j < m)
    {
        mergeArray[k] = b[j];
        k++;
        j++;
    }
    return 0;
}

void printArray(int mergeArray[],int size) {
    for(int i=0;i<size;i++){
       cout<<mergeArray[i]<<" ";
    }
    return;
}


int main()
{
    int n, m;
    cout << "Enter the first array size:" << endl;
    cin >> n;
    cout << "Enter the second array size:" << endl;
    cin >> m;
    int a[n], b[m];
    cout << "Enter first array elements:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Enter second array elements:" << endl;
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    int mergeArray[n + m];
    mergeSort(n, m, a, b, mergeArray);
    cout<<"After Merging Two Given Array:"<<endl;
    printArray(mergeArray,n+m);
    return 0;
}
