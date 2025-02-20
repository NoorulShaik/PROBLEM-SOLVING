#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
cout<<"Enter a sentence containg UPPER and LOWER case Characters:";
cin>>s;
int cnt_UPPER = 0;
int cnt_lower = 0;
for(int i = 0;i < s.length();i++){
	if(char(s[i]) <= 90 && char(s[i]) >= 65){
		 cnt_UPPER++;
	
   }else{
	   
	  cnt_lower++; 
	   
   }
}
cout<<"UPPER CASE" <<" "<<cnt_UPPER<<endl;
cout<<"LOWER CASE" <<" "<<cnt_lower<<endl;




return 0;
}
