#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m ;
    cin>>n>>m;
    int f =m;
    vector<int>v,t ;
    while(m--){
        int a ;
        cin>>a;
        v.push_back(a);
    }
    // for(int i =0 ; i<v.size();i++){
    //     cout<<v[i]<<"//"<<endl;
    // }
    
    int i =0 ;
    int j = n-1;
    // cout<<j<<"."<<m<<endl;
    sort(v.begin(),v.end());
    while(j<f){
        t.push_back(v[j]-v[i]);
        // cout<<v[j]-v[i]<<"=="<<endl;
        i++;
        j++;
    }
    // for(int i =0 ; i<t.size();i++){
    //     cout<<t[i]<<"//"<<endl;
    // }
    sort(t.begin(),t.end());
    cout<<t[0]<<"";
    return 0;
    
}