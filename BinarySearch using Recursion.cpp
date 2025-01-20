#include<iostream>
using namespace std;

int BinarySearch(int arr[],int start,int end,int key) {
    int mid=(start+end)/2;
    if(start>end) {
        return -1;
    }
    else if(arr[mid]==key) {
        return mid;
    }
    else if(key>arr[mid]) {
        return BinarySearch(arr,mid+1,end,key);
    }
    else {
        return BinarySearch(arr,start,mid-1,key);
    }
}

int main()
{
    int key;
    int arr[10]= {1,2,3,4,5,6,7,8,9,10};
    cout<<"Enter key to search:"<<endl;
    cin>>key;
    int x=BinarySearch(arr,0,9,key);
    if(x>-1) {
        cout<<"Key found in index: "<<x<<endl;
    }
    else {
        cout<<"Key Not found!"<<endl;
    }
    return 0;
}
