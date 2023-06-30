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
       int l=0,r=n-1;
       vector<int> v(n,0);
       v[n-1]=1;
       for(int i=0;i<n-1;i++){
        if(i%k==0){
            v[i]=1;
        }
       }
       cout<<accumulate(v.begin(),v.end(),0)<<endl;
    }
    return 0;
}