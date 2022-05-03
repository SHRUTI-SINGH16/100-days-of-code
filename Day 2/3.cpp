// Q1. Write a program to get 3 values from user and find max and min number of it.

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n1,n2,n3;
    cout<<"Enter the first number: ";
    cin>>n1;
    cout<<"Enter the second number: ";
    cin>>n2;
    cout<<"Enter the third number: ";
    cin>>n3;

    cout<<"Max: "<<max(n1,n2,n2)<<endl;
    cout<<"Min: "<<min(n1,n2,n2)<<endl;

    return 0;
}