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
       cin>>n;
       vector<int> v(n);
       for(int i=0;i<n;i++){
        cin>>v[i];
       }
       sort(v.begin(),v.end());
       int ans=0,cm=1;
       for(int i=0;i<n;i++){
        if(v[i]>=cm){
            ans+=v[i]-cm;
            cm++;
        }
       }
       cout<<ans<<endl;
    }
    return 0;
}