#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ;
    cin>>n ;
    vector<pair<int,int>>v;
    int arr[n];
    for(int i =0 ; i<n;i++){
      cin>>arr[i];
    }
    int f = INT_MAX;
    int ans1 = -1;
    int ans2 = -1;
    for(int i =0 ; i<=n;i++){
        int k = arr[i%n]- arr[(i+1)%n];
          k = abs(k);
        //   cout<<k<<" i "<<i<<endl; 
         if(k<f){
           ans1 = (i%n);
           ans2 = ((i+1)%n);
           f= k;
         }
    }
    cout<<(ans1+1)<<" "<<(ans2+1);
   
}