#include<bits/stdc++.h>
using namespace std ;
string  f(int cz, int cf){
    cout<<cf<<"/ "<<cz<<endl;
    if(cz==0){
        return 0;
    }
    if(cf%9!=0){
        return 0;
    }
    string a =" ";
    while(cf--){
        cout<<"yes"<<endl;
         a += to_string(5);
        cout<<a<<" "<<endl;
    }
    
    while(cz--){
        a += to_string(0);
        cout<<a<<" "<<endl;
    }
    cout<<a<<" /"<<endl;
    return a;
}
int main(){
    int n ;
    cin>>n;
    int cz=0;
    int cf=0;
    for(int i =0 ; i<n ; i++){
         int k ;
         cin>>k;
         if(k==0){
            cz++;
         }
         if(k==5){
            cf++;
         }
    }
string  ans = f(cz,cf);
   cout<<ans<<" ";


}