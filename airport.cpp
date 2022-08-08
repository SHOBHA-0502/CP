#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;//number of pass
    int m;//no of plane;
    cin>>n>>m;
    int arr[m];
    
    for(int i =0 ; i<m ; i++){
          cin>>arr[i];
    }
    sort(arr, arr+m);
    int count =0;
    for(int i =0 ; i<m ; i++){
        if(arr[i]<=n){
            n-=arr[i];
            int 
            while(arr[i]--){
                  count+=arr[i];
            }
        }
        else{
            while(n--){
                count+=arr[i];
                arr[i]--;
            }
        }
    }
cout<<count;
    
}