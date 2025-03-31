#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a number:"<<endl;
    cin>>n;
    if(n==1) {
        cout << "Not Prime!" << endl;
        return 0;
    }
    int x=sqrt(n);
    for(int i=2; i<=x; i++) {
        if(n%i==0) {
            cout << "Not Prime!" << endl;
            return 0;
        }
    }
    cout << "Prime!" << endl;
    return 0;
}

/*Number that divisible by 1 and itself and the total divisor of that number is 2.

1 is prime or not?
No, the number 1 is not a prime number because it only has one factor (itself), while prime numbers must have exactly two distinct factors: 1 and the number itself.*/

    
