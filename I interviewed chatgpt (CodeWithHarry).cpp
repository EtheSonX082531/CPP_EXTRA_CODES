#include<iostream>
using namespace std;

int main()
{
    int arr[]= {3,5,7,3,5,7,3,545,34,235,234,3};
    int sum=0;
    for(int i=0; i<(sizeof(arr)/sizeof(arr[0])); i++) {
        if(arr[i]>arr[6]) {
            swap(arr[i],arr[6]);
        }
    }
    for(int i=0; i<(sizeof(arr)/sizeof(arr[0]))-1; i++) {
        if(i==6 ) {
            continue ;
        }
        else {
            for(int j=i+1; j<(sizeof(arr)/sizeof(arr[0])); j++) {
                if(j==6) {
                    continue;
                }
                else {
                    if(arr[j]>=arr[i]) {
                        swap(arr[i],arr[j]);
                    }
                }
            }
        }
    }
    cout<<"After sorting such that way:"<<endl;
    for(int i=0; i<(sizeof(arr)/sizeof(arr[0])); i++) {
        cout<<arr[i]<<" ";
    }
    return 0;
}
