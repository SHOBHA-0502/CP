#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ;
    cin>>n;
     int k =0;
    while(n--){
        string s;
        cin>>s;
        if(s=="++X"||s=="X++"){
            k+=1;
        }
        else{
            k-=1;
        }

    }
    cout<<k;
}