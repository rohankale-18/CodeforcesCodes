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
       if(n%2==0){
        cout<<"YES"<<endl;
       }
       else{
        if(n%k==2 || n%k==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
       }
    }
    return 0;
}