#include<bits/stdc++.h>
using namespace std;
string f(string s){
   queue<char>q;
   for(int i =0 ; i<s.size();i++){
    q.push(s[i]);
   }

   while(!q.empty()){
      char t = s.front();
      if(t !='1'){
        return "NO";
      }
      else{
        q.pop();
        int k =0 ;
        while(q.front()=='4'){
            k++;
            q.pop();
        }
        if(k>2){
            return "NO";
        }

      }
   }
   return "YES";

}
int main(){
    int n ;
    cin>>n ;
    string s = to_string(n);
    string ans = f(s);
    
     cout<<ans<<endl;
   
}