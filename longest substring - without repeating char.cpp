#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    
    string s="bbbbbcdefghijklmn";
    vector<char> freq;
   
   int max=0,prev=0;
   freq.push_back(s[0]);
   for(int i=1;i<s.size();i++){
        if( find(freq.begin(), freq.end(),s[i]) == freq.end() ){
            freq.push_back(s[i]);
        }
        else if(find(freq.begin(), freq.end(),s[i]) == freq.end()){
            prev = max(freq.size(),prev);
            freq.clear();

        }
   }
cout<<endl<<"size: "<<freq.size()<<endl;

 return 0;
}