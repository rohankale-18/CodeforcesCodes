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
       int a,b;
       cin>>a>>b;
       if(a>b) swap(a,b);
       int ans=b-a;
       if(ans==0){
        cout<<0<<" "<<0<<endl;
       }
       else{
        cout<<ans<<" "<<min(a%ans,ans-a%ans)<<endl;
       }
    }
    return 0;
}