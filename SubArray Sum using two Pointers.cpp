#include<iostream>
using namespace std;

int main()
{
    int n,target;
    cout<<"Enter the size of array:"<<endl;
    cin>>n;
    int arr[n];
    cout << "Enter array elements:" << endl;
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    cout << "Enter target sum:" << endl;
    cin>>target;
    int left=0,right=0,tempSum=arr[0];
    while(right<n) {
        if(tempSum==target) {
            cout << "SubArray found for the given sum!" << endl;
            for(int i=left; i<=right; i++) {
                cout<<arr[i]<<" ";
            }
            cout<<" = "<<target<<endl;
            return 0;
        }
        else if(tempSum<target) {
            right++;
            if(right<n) {
                tempSum += arr[right];
            }
        }
        else if(tempSum>target) {
            tempSum -= arr[left];
            left++;
        }
    }
    cout << "No SubArray found for the given sum!" << endl;
    return 0;
}
