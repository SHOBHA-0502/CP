#include<bits/stdc++.h>
using namespace std ;
int main(){
    int n ;
    int m ;
    cin>>n>>m;
    priority_queue <int, vector<int>, greater<int> > pq;
    vector<int>v;
    for(int i =0 ; i<m ; i++){
        int a ;
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    priority_queue<int> q;
    for(int i =0 ; i<m ; i++){
        q.push(v[i]);
        pq.push(v[i]);
    }
    int u = n;
    int w =n;
    int ans1=0;
    int ans2 =0;
    while(u--){
        int a = q.top();
        q.pop();
        ans1+=a;
        a-=1;
        if(a!=0){
        q.push(a);
        }
    }
    while(w--){
        int b = pq.top();
        pq.pop();
        ans2 += b;
        b-=1;
        if(b!=0){
            pq.push(b);
        }

    }
    cout<<ans1<<" "<<ans2;


}