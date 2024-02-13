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
       int n,cnt=0;
       cin>>n;
       vector<int> v(2*n);
       for(int i=0;i<2*n;i++){
        cin>>v[i];
        if(v[i]&1) cnt++;
       }
       if(cnt==n)cout<<"Yes"<<endl;
       else cout<<"No"<<endl;
    }
    return 0;
}