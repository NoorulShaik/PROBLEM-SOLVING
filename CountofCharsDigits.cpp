#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
cout<<"Enter a sentence containg alphanumerics:";
cin>>s;
int cnt_chars = 0;
int cnt_digits = 0;
for(int i = 0;i < s.length();i++){
	if(char(s[i]) <= 57 && char(s[i]) >= 48){
		 cnt_digits++;
	
   }else{
	   
	  cnt_chars++; 
	   
   }
}
cout<<"LETTERS" <<" "<<cnt_chars<<endl;
cout<<"DIGITS" <<" "<<cnt_digits<<endl;




return 0;
}
