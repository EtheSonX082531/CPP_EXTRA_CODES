#include<iostream>
using namespace std;

//normal method
void change(int &b) {
    b=11; //alias
    return ;
}

//By returning pointer variable 
/*int* change(int &a){
   int* p=&a;
   *p=200;
   return p;
   }*/

int main()
{
    cout << "All about Pointers:" << endl;
    cout<<"1.Printing Address of a variable:\n"<<endl;
    int a=10;
    cout<<&a<<endl;
    cout<<endl;
    cout <<"2.Printing the value,which is in the variable using address:\n" << endl;
    cout<<*(&a)<<endl;
    cout<<endl;
    //Storing address of a int type variable in a int type pointer variable
    int* p=&a;
    cout<<"3.Printing address and value with the help of pointer variable:\n"<<endl;
    cout<<p<<endl;
    cout<<&a<<endl;
    cout<<*p<<endl;
    cout<<endl;
    cout<<"Address of Pointer variable:"<<endl;
    cout<<&p<<endl;
    //Pointer to Pointer stores the address of a pointer variable
    int** q=&p;
    cout<<endl;
    cout<<"4.Pointer to Pointer:\n"<<endl;
    cout<<&q<<endl;
    cout<<q<<endl;
    cout<<*q<<endl;
    cout<<**q<<endl;
    cout<<endl;
    // '*' = Dereferencing Operator/Star operator
    int* r=NULL; // null pointer
    cout<<endl;
    cout<<"5.NULL Pointer:\n"<<endl;
    cout<<r<<endl;
    cout<<endl;
    cout<<"6.Change value with pass by Reference:\n"<<endl;
    cout<<"Before change a= "<<a<<endl;
    cout<<" After change:"<<endl;
    //int* z=change(a);
    //cout<< *z <<endl;
    change(a);
    cout<<a<<endl;
    cout<<endl;
    // just arr is a pointer which is pointing the 0th element of the array
    int arr[]={1,2,3,4,5};
    cout<<arr<<endl;
    cout<<*arr<<endl;
    cout<<*(arr+1)<<endl;
    cout<<*(arr+2)<<endl;
    cout<<"Using pointer loop in array:\n"<<endl;
    int *w=arr;
    while(w<=(arr+4)){
    cout<<*w<<" ";
    w++;
    }
    // Array elements has contiguous memory location
    return 0;
}
