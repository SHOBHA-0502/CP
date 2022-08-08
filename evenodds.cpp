#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n ;
    cin>>n;
    long long  k ;
    cin>>k;
    if(n%2==0){
        long long  f = n/2;
        if(k<=f){
            cout<<((2*k)-1);
        }
        else{
          k= k-f;
          cout<<(2*k);

        }
    }
    else{
        long long  f = (n/2)+1;
        if(k<=f){
            cout<<((2*k)-1);
        }
        else{
          k= k-f;
          cout<<(2*k);

        }
        
    }
    
}