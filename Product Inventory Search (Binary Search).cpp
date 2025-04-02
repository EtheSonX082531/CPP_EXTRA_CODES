#include<bits/stdc++.h>
using namespace std;
#define fastIO() ios::sync_with_stdio(0); cin.tie(0);

// Function for binary search 
bool binarySearch(vector<int>&productIDs,int targetId){
        int start=0,end=productIDs.size()-1;
        while(start<=end){
            int mid=(start+end)/2;
            if(productIDs[mid]==targetId){
                return true;
            }
            else if(productIDs[mid]<targetId){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
      return false;
}


int main(){
    fastIO();
    int n,targetId;
    cout<<"Enter the size of ID_Array:"<<endl;
    cin>>n;
    vector<int>productIDs(n); // Declare a vector to hold the product IDs.
    cout<<"Enter all the ID's here:"<<endl;
    for(int i=0;i<n;i++){
        cin>>productIDs[i]; // Input each product ID into the vector.
    }
    cout<<"Enter the ID you want to find in the ID_Array:"<<endl;
    cin>>targetId;

    // Perform binary search and print TRUE if found, otherwise FALSE.
    (binarySearch(productIDs,targetId))?cout<<"TRUE"<<endl:cout<<"FALSE"<<endl;
    return 0;
}
