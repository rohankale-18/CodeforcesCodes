#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define mod 1000000007
#define endl "\n"
#define fio ios_base::sync_with_stdio(false); cin.tie(NULL);

int32_t main(){
    fio;
    int t;
    cin>>t;
    while(t--){
       string f,s,t;
       char ans='.';
       cin>>f>>s>>t;
       for(int i=0;i<3;i++){
        if(f[i]==s[i] && f[i]==t[i] && f[i]!='.'){
            ans=f[i];
        }
        if(f[0]==s[1] && f[0]==t[2] && f[0]!='.'){
            ans=f[0];
        }
        if(f[2]==s[1] && f[2]==t[0] && f[2]!='.'){
            ans=f[2];
        }
        if(f[0]==f[1] && f[0]==f[2] && f[0]!='.'){
            ans=f[0];
        }
        if(s[0]==s[1] && s[0]==s[2] && s[0]!='.'){
            ans=s[0];
        }
        if(t[0]==t[1] && t[0]==t[2] && t[0]!='.'){
            ans=t[0];
        }
       }  
       if(ans=='.'){
        cout<<"DRAW"<<endl;
       }   
       else{
        cout<<ans<<endl;
       }          
    }
    return 0;
}