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
       string s;
       cin>>s;
       if(s[0]=='?'){
        s[0]='0';
       }
       if(s[s.size()-1]=='?'){
        s[s.size()-1]='1';
       }
       for(int i=0;i<s.size()-1;i++){
        if(s[i]=='0' && s[i+1]=='?'){
            s[i+1]='0';
        }
        else if(s[i]=='1' && s[i+1]=='?'){
            s[i+1]='1';
        }
       }
       cout<<s<<endl;
    }
    return 0;
}