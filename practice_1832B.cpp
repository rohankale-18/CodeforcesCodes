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
       int n,k,ans=0;
       cin>>n>>k;
       vector <int> v,pre(n+1,0);
       for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
       }
       sort(v.begin(),v.end());
       for(int i=0;i<n;i++){
        pre[i+1]=pre[i]+v[i];
       }
       for(int i=0;i<=k;i++){
        ans=max(ans,pre[n-k+i]-pre[2*i]);
       }
       cout<<ans<<endl;
    }
    return 0;
}