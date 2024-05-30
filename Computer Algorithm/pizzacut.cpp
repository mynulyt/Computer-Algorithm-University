#include<bits/stdc++.h>
using namespace std;
 int PC(int n){
 if (n==1){
    return 2;
 }
 return PC(n-1)+n;
 }
 int main(){
 int n;
 cin>>n;
 cout<<PC(n)<<endl;
 return 0;
 }

