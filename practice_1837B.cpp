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
       int n,ans=1,curr=1;
       string s;
       cin>>n>>s;
       for(int i=0;i<s.size()-1;i++){
        if(s[i]!=s[i+1]){
            curr=1;
        }
        else{
            curr++;
        }
        ans=max(ans,curr);
       }
       cout<<ans+1<<endl;
    }
    return 0;
}