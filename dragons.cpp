#include<bits/stdc++.h>
using namespace std;
int main(){
    int s;
    int n ;
    cin>>s>>n;
    vector<pair<int,int>>v;
    while(n--){
        int x;
        cin>>x;
        int y;
        cin>>y;
        v.push_back(make_pair(x,y));
    }
    sort(v.begin(), v.end());
    string ans = "YES";
    for(int i =0 ; i<v.size();i++){
        if(s>v[i].first){
            s+=v[i].second;
        }
        else{
            ans = "NO";
            break;
        }
    }
    cout<<ans<<endl;

}