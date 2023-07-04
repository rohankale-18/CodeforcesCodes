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
       int n;
       cin>>n;
       if(n&1){
        for(int i=1;i<=n;i++){
            cout<<i<<" ";
        }cout<<endl;
       }
       else{
        for(int i=2;i<=2*n;i+=2){
            cout<<i<<" ";
        }cout<<endl;
       }
    }
    return 0;
}