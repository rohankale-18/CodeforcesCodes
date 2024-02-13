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
       int n,s=0;
       cin>>n;
       vector<int> v(n);
       for(int i=0;i<n;i++){
        cin>>v[i];
       }
       if(n==1){
        cout<<v[0]<<endl;
        continue;
       }
       sort(v.begin(),v.end());
       int ans=v[0];
       for(int i=0;i<n;i++){
        v[i]-=s;
        s+=v[i];
       }
       for(int i=0;i<n;i++){
        ans=max(ans,v[i]);
       }
       cout<<ans<<endl;
    }
    return 0;
}