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
       int n,k;
       cin>>n>>k;
       vector <pair<int,int>> a;
       vector <int> b,ans(n,0);
       for(int i=0;i<n;i++){
        int x;
        cin>>x;
        a.push_back(make_pair(x,i));
       }
       for(int i=0;i<n;i++){
        int x;
        cin>>x;
        b.push_back(x);
       }
       sort(a.begin(),a.end());
       sort(b.begin(),b.end());

       for(int i=0;i<n;i++){
        ans[a[i].second]=b[i];
       }
       for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
       }cout<<endl;
    }
    return 0;
}