#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    map<string,int>m;
    for(int i =0 ; i<n ; i++){
          string s;
          cin>>s;
          m[s]++;
    }
    string ans;
    int k = INT_MIN;
    for(auto i : m){
        if(i.second>k){
            ans = i.first;
            k = i.second;
        }
    }
    cout<<ans<<endl;
}