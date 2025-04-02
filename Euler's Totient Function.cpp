#include<bits/stdc++.h>
using namespace std;

#define fastIO() ios::sync_with_stdio(0); cin.tie(0);

int phi(int n) {

    int result=1;
    for(int i=2; i<=sqrt(n); i++) {
        if(n%i==0) {
            int power=0;
            while(n%i==0) {
                power++;
                n=n/i;
            }
            result=result*(pow(i,power-1)*(i-1));
        }
    }
    if(n>1) {
        result=result*(n-1);
    }
    return result;
}



int main()
{ 
    fastIO();
    
    int n;
    cout << "Enter a number:";
    cin>>n;
    cout << "Euler's Totient Function phi(" <<n<< "): "<<phi(n)<< endl;
    return 0;
}
