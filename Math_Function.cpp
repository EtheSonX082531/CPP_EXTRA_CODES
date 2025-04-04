#include<bits/stdc++.h>
using namespace std;
#define fastIO() ios::sync_with_stdio(0); cin.tie(0);


void isPrime() {
    int n,m;
    cout<<"Enter a number: ";
    cin>>n;
    m=sqrt(n);
    for(int i=2; i<=m; i++) {
        if(n%i==0) {
            cout<<"Not Prime!"<<endl;
            return ;
        }
    }
    cout << "Prime" << endl;
    return ;
}

void numOfFactors() {
    int n,m,count=0;
    cout << "Enter the number: ";
    cin>>n;
    m=sqrt(n);
    for(int i=1; i<=m; i++) {
        if(n%i==0) {
            count++;
            if(n/i!=i) {
                count++;
            }
        }
    }
    cout << "Number of Factors: " <<count<<endl;
    return ;
}



void sumOfFactors() {
    int n,m,sum=0;
    cout << "Enter a number: ";
    cin>>n;
    m=sqrt(n);
    for(int i=1; i<=m; i++) {
        if(n%i==0) {
            sum=sum+i;
            if(n/i!=i) {
                sum=sum+(n/i);
            }
        }
    }
    cout << "Sum of Factors: " <<sum<< endl;
    return ;
}

void productOfFactors() {
    int n,m,product=1;
    cout << "Enter a number: ";
    cin>>n;
    m=sqrt(n);
    for(int i=1; i<=m; i++) {
        if(n%i==0) {
            product=product*i;
            if(n/i!=i) {
                product=product*(n/i);
            }
        }
    }
    cout << "Product of Factors is: " << product <<endl;
    return ;
}

void primeFactorization() {
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    if(n>1) {
        for(int i=2; i<=sqrt(n); i++) {
            if(n%i==0) {
                while(n%i==0) {
                    cout<<i<<" ";
                    n=n/i;
                }
            }
        }
        if(n>1) {
            cout<<n;
        }
        cout<<endl;
    }
    else {
        cout << "Has no Prime Factorization!" << endl;
    }
    return ;
}

void findAllFactors() {
    int n,m;
    list<int>l;
    cout << "Enter a number: ";
    cin>>n;
    m=sqrt(n);
    for(int i=1; i<=m; i++) {
        if(n%i==0) {
            l.push_back(i);
            if(n/i!=i) {
                l.push_back(n/i);
            }
        }
    }
    l.sort();
    cout<<"All Factors of the number:"<<endl;
    for(int i:l) {
        cout<<i<<" ";
    }
    cout<<endl;
    return ;
}

void sieve() {
    int n;
    cout << "Enter a number: ";
    cin>>n;
    vector<int>prime_Box(n+1,1);
    for(int i=2; i<=n; i++) {
        if(prime_Box[i]==1) {
            for(int j=i*i; j<=n; j=j+i) {
                prime_Box[j]=0;
            }
        }
    }
    cout << "All primes in this range:" << endl;
    for(int i=2; i<=n; i++) {
        if(prime_Box[i]==1) {
            cout<<i<<" ";
        }
    }
}


void gcd() {
    int n1,n2;
    cout << "Enter two number for GCD:" << endl;
    cin>>n1>>n2;
    if(n1!=0 && n2!=0) {
        if(n1>n2) {
            swap(n1,n2);
        }
        while(n2!=0) {
            int x=n1;
            n1=n2%n1;
            n2=x;
        }
        cout<<"GCD using Euclid's Algorithm: "<<n1<<endl;
        return ;
    }
    else {
        cout<<"GCD using Euclid's Algorithm: "<<max(n1,n2)<<endl;
        return ;
    }
}

void lcm() {
    int a,b,n1,n2;
    cout << "Enter two number for LCM:" << endl;
    cin>>n1>>n2;
    a=n1,b=n2;
    if(n1>n2) {
        swap(n1,n2);
    }
    int x;
    while(n2!=0) {
        x=n1;
        n1=n2%n1;
        n2=x;
    }
    cout << "LCM using Euclid's Algorithm: " << (a*b)/n1 <<endl;
    return ;
}

void eulerTotient() {
    int n,result=1;
    cout << "Enter a number: " ;
    cin>>n;
    int a=n;
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
    cout<<"Phi("<<a<<"):"<<result<<endl;
    return ;
}


int main()
{
    fastIO();
    int click=1;
    while(click) {
        cout << "\nSelect Operation:" << endl;
        cout << "1.Checking if a number is Prime-->" << endl;
        cout << "2.Number of Factors-->" << endl;
        cout << "3.Sum of Factors-->" << endl;
        cout << "4.Product of Factors-->" << endl;
        cout << "5.Prime Factorization-->" << endl;
        cout << "6.Finding all Factors of a number-->" << endl;
        cout << "7.Sieve of Eratosthenes-->" << endl;
        cout << "8.GCD(Euclid's Algorithm)-->" << endl;
        cout << "9.LCM(Euclid's Algorithm)-->" << endl;
        cout << "10.Euler's Totient Function-->" << endl;
        cout << "0.Exit." << endl;
        cout<<"Input: ";
        cin>>click;

        if(click>=1 && click<=10) {
            if(click==1) {
                isPrime();
            }
            else if(click==2) {
                numOfFactors();
            }
            else if(click==3) {
                sumOfFactors();
            }
            else if(click==4) {
                productOfFactors();
            }
            else if(click==5) {
                primeFactorization();
            }
            else if(click==6) {
                findAllFactors();
            }
            else if(click==7) {
                sieve();
            }
            else if(click==8) {
                gcd();
            }
            else if(click==9) {
                lcm();
            }
            else if(click==10) {
                eulerTotient();
            }

        }
        else {
            while(click<0 || click>10) {
                cout << "Wrong Choice!" << endl;
                cout << "Input again: ";
                cin>>click;
            }
        }
    }
    return 0;
}
