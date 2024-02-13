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
       if(b==1) cout<<"NO"<<endl;
       else{
        cout<<"YES"<<endl;
        cout<<a<<" "<<a*b<<" "<<a*(b+1)<<endl;
       }
    }
    return 0;
}