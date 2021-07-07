#include <iostream>
#include<bits/stdc++.h>
using namespace std;
const int n=1e5+10;
int a[n][n];
int pf[n];
 
int main() {
  /*
int i;
cout<<"enter the size of an array:"<<endl;
cin>>i;
cout<<"enter the elements of an array:"<<endl;
for(int j=1;j<=i;j++){
cin>>a[j];
pf[j]=pf[j-1]+a[j];
}


cout<<"emter the q. no:"<<endl;
int q;
cin>>q;
while(q--){
cout<<"emter the l & r:"<<endl;
int l,r;
cin>>l>>r;
cout<<endl<<pf[r]-pf[l-1]<<endl;  
}
*/


//2D Prefix
int i;

cout<<"enter the size of an array:"<<endl;
cin>>i;
cout<<"enter the elements of an array:"<<endl;
for(int j=1;j<=i;++j){
  for(int p=1;p<=i;++p){
    cin>>a[j][p];
}
}
cout<<"emter the q. no:"<<endl;
int q;
cin>>q;
while(q--){
  int aa,bb,cc,dd;
  cin>>aa>>bb>>cc>>dd;
  long sum=0;
  for(int x=aa;x<=cc;++x){
  for(int y=bb;y<=dd;++y){
      sum = sum + a[x][y];
}
}

  cout<<endl<<"SUM IS: "<<sum;
}

return 0;
}