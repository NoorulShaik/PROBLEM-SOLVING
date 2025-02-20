#include<iostream>
#include<bits./stdc++.h>
using namespace std;
int main(){
    int sum = 0;
    int a;
char option;
while(true){
cout<<"Enter 'D' to deposite:"<<endl;
cout<<"ENter 'W' to withdraw:"<<endl;
cout<<"Enter 'S' to stop the process:"<<endl;
cout<<"ENter the option:"<<endl;
cin>> option;
switch(option){
    case 'D':cout<<"Enter the value to deposite:";
             cin>>a;
             sum+=a;
             break;
    case 'W':cout<<"ENter the value to withdraw:";
            cin>>a;
            sum-=a;
            break;
    case 'S':cout<<"The total balance is :"<<sum<<endl;
            return 0;
    default : cout<<"Enter the correct option";
}

}

    return 0;
} 