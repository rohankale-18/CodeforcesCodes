#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define mod 1000000007
#define endl "\n"
#define fio ios_base::sync_with_stdio(false); cin.tie(NULL);

int32_t main(){
    fio;
    int t;
    cin>>t;
    while(t--){
       int n,ans=INT_MIN;
       int OddSum=0,EvenSum=0;    
       cin>>n;
       while(n--){
        int x;
        cin>>x;
        ans=max(ans,x);
        if(x<=0) continue;
        if(n&1) OddSum+=x;
        else EvenSum+=x;
       }
       if(ans>=0) ans=max(ans,max(OddSum,EvenSum));
       cout<<ans<<endl;
    }
    return 0;
}