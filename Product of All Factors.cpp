#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    long long int product=1;
    cout << "Enter a number:" << endl;
    cin>>n;
    if(n!=0) {
        int x=sqrt(n);
        for(int i=1; i<=x; i++) {
            if(n%i==0) {
                product=product*i;
                if(n/i!=i) {
                    product=product*(n/i);
                }
            }
        }
    }
    else {
        product=0;
    }
    cout << "Product of Factors is:" << endl;
    cout << product ;
    return 0;
}
