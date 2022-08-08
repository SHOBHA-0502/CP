#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n ;
    int k ;
    cin>>k;
    queue<pair<int,int>>q;
    for(int i =0 ; i<n ; i++){
        int a;
        cin>>a;
        q.push(make_pair(i+1,a));
    }
    while(q.size()!=1){
        pair<int,int>t = q.front();
        if(t.second<=k){
            q.pop();
        }
        else{
            t.second = t.second-k;
            q.pop();
            q.push(t);
        }
    }
     pair<int,int>t= q.front();
    cout<< t.first<<endl;
}