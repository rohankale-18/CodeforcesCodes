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
       vector<int> v(n),diff;
       for(int i=0;i<n;i++){
        cin>>v[i];
       }
       for(int i=1;i<n;i++){
        diff.push_back(abs(v[i]-v[i-1]));
       }
       sort(diff.begin(),diff.end());
       for(int i=0;i<n-k;i++){
        ans+=diff[i];
       } 
       cout<<ans<<endl;
    }
    return 0;
}