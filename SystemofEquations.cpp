#include<bits/stdc++.h>
using namespace std ;
int main(){
    int n ;
    int  m ;
    cin>>n>>m;
    int ans=0;
    for(int i =0 ; i<=n ;i++){
        for(int j =0 ; j<=m;j++){
            if(i*i + j == n && i + j*j ==m){
                ans++;
            }
        }
    }
    cout<<ans;
}