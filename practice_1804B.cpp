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
       int n,k,d,w;
       cin>>n>>k>>d>>w;
       vector<int> v(n);
       for(int i=0;i<n;i++){
        cin>>v[i];
       }
       int when=-1,ans=0,cnt=0;
       for(int i=0;i<n;i++){
        if(v[i]<=when+d && cnt>0){
            cnt-=1;
        }
        else{
            when=v[i]+w;
            cnt=k-1;
            ans+=1;
        }
       } 
       cout<<ans<<endl;
    }
    return 0;
}