#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,sumOfFactors=0;
    cout << "Enter a number:" << endl;
    cin>>n;
    int x=sqrt(n);
    for(int i=1; i<=x; i++) {
        if(n%i==0) {
            sumOfFactors=sumOfFactors+i;
            if(n/i!=i) {
                sumOfFactors=sumOfFactors+(n/i);
            }
        }
    }
    cout << "Sum of Factors is:" << endl;
    cout << sumOfFactors ;
    return 0;
}
