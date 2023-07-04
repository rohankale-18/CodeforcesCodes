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
       int n,k,x=-1;
       cin>>n>>k;
       for(int i=0;i<=n;i++){
        if((i*(i-1))/2 + ((n-i)*(n-i-1))/2 == k){
            x=i;
        }
       }
       if(x==-1){
        cout<<"NO"<<endl;
       }
       else{
        cout<<"YES"<<endl;
        for(int i=0;i<n;i++){
            if(i<x)cout<<1<<" ";
            else cout<<-1<<" ";
        }cout<<endl;
       }
    }
    return 0;
}