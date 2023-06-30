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
        int k=0;
       string s;
       cin>>s;
       string a="codeforces";
       for(int i=0;i<s.size();i++){
        if(s[i]!=a[i]) k++;
       }
       cout<<k<<endl;
    }
    return 0;
}