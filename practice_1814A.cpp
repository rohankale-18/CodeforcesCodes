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
       int n,k,z=0;
       cin>>n>>k;
       for(int i=0;i<2;i++){
        if(n-k*i>=0 && (n-k*i)%2==0){
            z=1;
            break;
        }
       }
       if(z){
        cout<<"YES"<<endl;
       }
       else{
        cout<<"NO"<<endl;
       }
    }
    return 0;
}