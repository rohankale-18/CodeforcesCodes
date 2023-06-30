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
       int n,x;
       cin>>n>>x;
       vector<int> a(n),b(n),c(n);
       for(int i=0;i<n;i++){
        cin>>a[i];
       }
       for(int i=0;i<n;i++){
        cin>>b[i];
       }
       for(int i=0;i<n;i++){
        cin>>c[i];
       }
       int z=0;
       for(int i=0;i<n;i++){
        if((x|a[i])!=x) break;
        z=z|a[i];
       }
       for(int i=0;i<n;i++){
        if((x|b[i])!=x) break;
        z=z|b[i];
       }
       for(int i=0;i<n;i++){
        if((x|c[i])!=x) break;
        z=z|c[i];
       }
       if(z==x){ cout<<"Yes"<<endl;}
       else {cout<<"No"<<endl;}
    }
    return 0;
}