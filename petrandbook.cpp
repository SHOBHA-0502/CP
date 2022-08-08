#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ;
    cin>>n;
    int arr[n];
    for(int i =0 ; i<7; i++){
         cin>>arr[i];
    }
    int count =0 ;
    int i =0 ;
    int ans =0;
    while(count<n){
        count+= arr[i%7];
        // cout<<count<<"/"<<endl;
        if(count>=n){
           ans = (i%7)+1;
           break;
        }
        i++;
    }
    cout<<ans<<endl;
}