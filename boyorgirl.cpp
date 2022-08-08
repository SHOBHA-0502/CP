#include<bits/stdc++.h>
using namespace std;
int main(){
    string s ;
    cin>>s ;
    int n = s.size();
    set<char>st;
    for(int i =0 ; i<n ; i++){
           st.insert(s[i]);
    }
    int k = st.size();
    if(k%2 ==0){
        cout<<"CHAT WITH HER!"<<endl;
    }
    else{
        cout<<"IGNORE HIM!"<<endl;
    }

}