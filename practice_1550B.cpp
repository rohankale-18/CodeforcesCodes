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
       int n,a,b;
       string s;
       cin>>n>>a>>b>>s;
       int k=unique(s.begin(),s.end())-s.begin();
       cout<<n*a + max(n*b,(k/2 +1)*b)<<endl;
    }
    return 0;
}