#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1;
    string s2;
    string s3;
    cin>>s1>>s2>>s3;
    map<char,int>m1,m2;
    for(int i =0 ; i<s1.size();i++){
        m1[s1[i]]++;
    }
    for(int i =0 ; i<s2.size();i++){
        m1[s2[i]]++;
    }
    for(int i =0 ; i<s3.size();i++){
        m2[s3[i]]++;
    }
    string ans = "YES";
    for(char i= 'A';i<'Z';i++){
        // cout<<"e"<<endl;
        if(m1[i]!=m2[i]){
            // cout<<"yes"<<endl;
            ans ="NO";
            break;
        }
    }
    cout<<ans;
}