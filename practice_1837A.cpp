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
       int x,k;
       cin>>x>>k;
       if(x%k!=0){
        cout<<1<<endl;
        cout<<x<<endl;
       }
       else{
        cout<<2<<endl;
        cout<<1<<" "<<x-1<<endl;
       }
    }
    return 0;
}