#include<iostream>
using namespace std;

int main()
{
    int n;
    bool flag;
    cout<<"Enter the Array size:"<<endl;
    cin>>n;
    int arr[n];
    cout << "Enter Array elements:" << endl;
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    //Bubble sort
    for(int i=0; i<n-1; i++) {
        flag=true;
        for(int j=1; j<n-i; j++) {
            if(arr[j-1]>=arr[j]) {
                flag=false;
                swap(arr[j-1],arr[j]);
            }
        }
        if(flag) break;
    }
    //Printing Array
    cout<<"After applying Bubble Sort:"<<endl;
    for(int i:arr) {
        cout<<i<<" ";
    }
    return 0;
}
