#include<bits/stdc++.h>
using namespace std;
int find(vector<int>v , int x , int start , int end){
    while(start<=end){
        int mid = (start+end)/2;
        if(v[mid]==x){
            return mid;
        }
        else if(v[mid]<x){
            start=mid+1;
        }
        else{
            end = mid-1;
        }
    }
    return -1;
}

int b(vector<int>v,int x){
int start =0;
int end = v.size()-1;
int tar = x ;
int f = find(v, x,start,end);
return f;

}
int main(){
    int n ;
    cin>>n;
    vector<int>v;
    for(int i =0 ; i<n ; i++){
         int a ;
         cin>>a;
         v.push_back(a);
    }
    int k;
    cin>>k;
    int va =0;
    int p =0;
    while(k--){
     int x ;
     cin>>x;
     cout<<"x"<<x<<endl;
     int t = b(v,x);
     cout<<t<<"//"<<endl;
     p +=(t+1);
     va +=((n-1)-t+1);
     }
    cout<<va<<" "<<p;

}