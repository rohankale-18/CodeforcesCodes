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
       int n,ans=0,zero=0;
       cin>>n;  
       vector <int> a;
       for(int i=0;i<n;i++){
        int x;
        cin>>x;
        a.push_back(x);
       }
       for(int i=0;i<n;i++){
        if(a[i]==0){
            zero++;
        }
        else{
            ans=max(ans,zero);
            zero=0;
        }
       }
       ans=max(ans,zero);
       cout<<ans<<endl;
    }
    return 0;
}   