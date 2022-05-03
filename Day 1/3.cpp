// Q.3 Write A Program To Create A Basic Calulator.

#include<iostream>
using namespace std;

int main()
{
    int n1,n2;
    char ch;
    cout<<"Enter the 1st integer: ";
    cin>>n1;
    cout<<"Enter the 2st integer: ";
    cin>>n2;
    cout<<"Enter the operator: ";
    cin>>ch;
    if(ch=='+'){
        cout<<"The sum is : "<<n1+n2;
    }else if(ch=='-'){
        cout<<"The difference is : "<<n1-n2;
    }else if(ch=='*'){
        cout<<"The product is : "<<n1*n2;
    }else if(ch=='/'){
        cout<<"The division is :"<<n1/n2;
    }
    return 0;
}