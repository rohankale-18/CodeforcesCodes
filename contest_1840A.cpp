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
        int n;
       string s;
       cin>>n>>s;
       int f=1,b=0;
       for(int f=1;f<=s.size();f++){
        if(s[b]==s[f]){
            cout<<s[b];
            b=f+1;
            f=f+1;
        }
       }cout<<endl;
    }
    return 0;
}