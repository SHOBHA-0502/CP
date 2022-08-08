#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n ;
    cin>>n ;
    for(int i =0 ; i<=n ; i++){
        for(int j =0 ; j<=n ; j++){
            if(i<(n-j)){
                cout<<" "<<" ";
            }
        }
        for(int k =0 ; k<=i; k++){
            if(k==0 && i==0){
                cout<<k;
            }
            else{
            cout<<k<<" ";
            }
        }
        for(int k =i-1; k>=0; k--){
            if(k==0){
                cout<<k;
            }
            else{
            cout<<k<<" ";
            }
        }
        cout<<endl;
    }
    for(int i = 0; i<n;i++){
        for(int j=0; j<n ; j++){
            if(j<=i){
                cout<<" "<<" ";
            }
        }
        for(int k = 0 ; k<n-i; k++){
            if(k==0 && i == n-1){
                cout<<k;
            }
            else{
            cout<<k<<" ";
            }
        }
        for(int k = n-i-2 ; k>=0; k--){
            if(k==0){
                cout<<k;
            }
            else{
            cout<<k<<" ";
            }
        }
    
        cout<<endl;
    }
    