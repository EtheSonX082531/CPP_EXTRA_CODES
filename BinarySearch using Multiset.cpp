#include<bits/stdc++.h>
using namespace std;

int main()
{
    multiset<int>m;
    int x;
    cout<<"Enter 10 elements randomly:"<<endl;
    for(int i=0; i<10; i++) {
        cin>>x;
        m.insert(x);
    }
    int arr[10];
    int j=0;
    for(int i:m) {
        arr[j++]=i;
    }
    cout<<"Printing the sorted values:"<<endl;
    for(int i:arr) {
        cout<<i<<" ";
    }
    cout<<"\nPerforming binarySearch:"<<endl;
    int key;
    cin>>key;
    int start=0,end=9;
    while(start<=end) {
        int mid=(start+end)/2;
        if(arr[mid]==key) {
            cout<<"Key found in index: "<<mid<<endl;
            return 0;
        }
        else if(key>mid) {
            start=mid+1;
        }
        else {
            end=mid-1;
        }
    }
    cout<<"Sorry!Key not found!"<<endl;
    return 0;
}
