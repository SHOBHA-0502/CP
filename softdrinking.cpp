#include<bits/stdc++.h>
using namespace std;
//n = friends;
//k = soft drinks
//l = ml of drinks   // nl +c(1)+np
//c = limes--->d slices
//p = salt
int main(){
   int n;
   int k ;
   int l;
   int c ;
   int d;
   int p;
   int nl;
   int np;
   cin>>n>>k>>l>>c>>d>>p>>nl>>np;

   int x = (k*l)/nl;
   int y = (c*d);
   int z = p/np;
   cout<<x<<" "<<y<<" "<<z<<endl;
   cout<<min(x,min(y,z))/n;



}