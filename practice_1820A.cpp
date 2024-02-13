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
       int count=0;
       if(s=="^"){
        cout<<1<<endl;
        continue;
       }
       if(s[0]=='_'){
        count++;
       }
       if(s.back()=='_'){
        count++;
       }
       for(int i=0;i<s.size()-1;i++){
        if(s[i]=='_' && s[i+1]=='_'){
            count++;
        }
       }
       cout<<count<<endl;
    }
    return 0;
}