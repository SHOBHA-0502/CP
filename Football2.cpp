#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s ;
    int n = s.size();
    int i =0 ;
    int count =0;
    bool t = false;
    while(i<n){
        count =0;
        if(s[i]=='1'){
            while(s[i]=='1'){
                count++;
                i++;
            }
            if(count>=7){
                t= true;
            }
        }
        else {
            count =0;
            if(s[i]=='0'){
            while(s[i]=='0'){
                count++;
                i++;
            }
            if(count>=7){
                t= true;
            }
        }

        }
    }
    if(t){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

}