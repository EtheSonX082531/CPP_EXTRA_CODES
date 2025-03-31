#include<bits/stdc++.h>
using namespace std;


bool checkPrime(int z) {
    if(z==1) {
        return false;
    }
    else {
        int a=sqrt(z);
        for(int i=2; i<=a; i++) {
            if(z%i==0) {
                return false;
            }
        }
    }
    return true;
}



int main()
{
    //Print all prime factors of a given number

    int n;
    list<int>l;
    cout << "Enter a number here:" << endl;
    cin>>n;
    int x=sqrt(n);
    for(int i=1; i<=x; i++) {
        if(n%i==0) {
            if(checkPrime(i)) {
                l.push_back(i);
            }
            if(n/i!=i) {
                if(checkPrime(n/i)) {
                    l.push_back(n/i);
                }
            }
        }
    }
    cout << "Printing all the Prime factors:" << endl;
    for(int i:l) {
        cout<<i<<" ";
    }
    return 0;
}

/*Time complexity: O(√n * √n) in worst case, 
though the actual number of operations is 
typically much lower for most inputs.*/
