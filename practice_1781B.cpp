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
       vector<int> v(n);
       for(int i=0;i<n;i++){
        cin>>v[i];
       }
       sort(v.begin(),v.end());
       for(int i=0;i<=n;i++){
        if(i==0 || v[i-1]<i){
            if(i==n || v[i]>i){
                ans++;
            }
        }
       }
       cout<<ans<<endl;
    }
    return 0;
}