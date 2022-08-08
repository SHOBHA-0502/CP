#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ;
    cin>>n;
    int arr[n];
    for(int i =0 ; i<n ; i++){
        cin>>arr[i];
    }
    vector<pair<int,int>>v;
    for(int i =0 ; i<n ; i++){
        v.push_back(make_pair(arr[i],i+1));
    }
    sort(v.begin(),v.end());
    int ans ;
    if(v.size()==1){
        ans = v[0].second;
    }
    else{
        if(v[0].first==v[1].first){
            cout<<"Still Rozdil";
            return 0;
        }
        else{
            ans = v[0].second;
        }
    }
    cout<<ans<<endl;

}