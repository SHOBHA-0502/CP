#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ;
    int m ;
    cin>>n>>m ;
    vector<int>v;
    for(int i =0 ; i<n ; i++){
        int a;
        cin>>a ;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    int ans =0;
    for(int i =0 ; i<m ; i++){
        if(v[i]<0){
            ans+= abs(v[i]);
        }
    }
    cout<<ans;
}