#include<bits/stdc++.h>
using namespace std;
int main(){
    int a ,b,c;
    cin>>a>>b>>c;
    int x = (a*b)/c;
    int y = (a*c)/b;
    int z = (b*c)/a;
    x = pow(x,0.5);
    y = pow(y,0.5);
    z = pow(z,0.5);
    // cout<<x<<"/"<<y<<"/"<<z;
    int ans = 4*(x+y+z);
    cout<<ans<<endl;


}