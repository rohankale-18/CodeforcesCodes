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
       int n,done=0,swp=0;
       string s;
       cin>>n>>s;
       for(int i=0;i<n-1;i++){
        if(s[i]=='L' && s[i+1]=='R'){
            swp=i+1;
        }
        else if(s[i]=='R' && s[i+1]=='L'){            
            done=1;
        }
       }
       if(done){
        cout<<0<<endl;
       }
       else if(swp==0 && done==0){
        cout<<-1<<endl;
       }
       else{
        cout<<swp<<endl;    
       }

    }
    return 0;
}