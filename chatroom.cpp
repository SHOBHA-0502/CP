#include<bits/stdc++.h>
using namespace std;
int main(){
    string t;
    cin>>t;
    string s = "hello";
    int n = s.size();
    string ans = "YES";
    for(int i =0 ; i<n; i++){
        bool f = false;
        int m = t.size();
        for(int j =0 ; j<m ; j++){
              if(s[i]==t[j]){
                   t= t.substr(j+1);
                   f = true;
                   break;
              }
        }
        // cout<<t<<endl;
        if(f==false){
           ans = "NO";
        }
    }
    cout<<ans;
 
}