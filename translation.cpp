#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,t;
    cin>>s;
    cin>>t;
    reverse(s.begin(),s.end());
    string ans ;
    if(s==t){
        ans = "YES";
    }
    else{
        ans = "NO";
    }
    cout<<ans;
}