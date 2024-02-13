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
       int k;
       cin>>k;
       int ans=0,count=0;
       while(count < k){
        ans++;        
        if(ans % 3 == 0 || ans % 10 == 3){
            continue;
        }        
        count++;
       }
       cout<<ans<<endl;
    }
    return 0;
}