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
       int n,m;
       cin>>n>>m;
       vector<int> v(n*m);
       for(int i=0;i<n*m;i++){
        cin>>v[i];
       }
       if(n>m) swap(n,m);
       sort(v.begin(),v.end());
       int a,b;
       a=(n-1)*(v[n*m-2]-v[0]) + n*(m-1)*(v[n*m-1]-v[0]);
       b=(n-1)*(v[n*m-1]-v[1]) + n*(m-1)*(v[n*m-1]-v[0]);
       cout<<max(a,b)<<endl;
    }
    return 0;
}