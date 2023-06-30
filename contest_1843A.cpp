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
       int n,ans=0;
       cin>>n;
       vector<int> v;
       for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
       }
       if(n==1){
        cout<<0<<endl;
       }
       else{
        sort(v.begin(),v.end());
        for(int i=0;i<n/2;i++){
            ans+=v[n-1-i]-v[i];
        }
        cout<<ans<<endl;
       }
    }
    return 0;
}