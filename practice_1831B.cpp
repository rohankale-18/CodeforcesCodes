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
       vector<int> a(n),b(n);
       for(int i=0;i<n;i++){
        cin>>a[i];
       }
       for(int i=0;i<n;i++){
        cin>>b[i];
       }
       map<int,int> ma,mb;
       int curr=1;
       for(int i=1;i<n;i++){
        if(a[i]!=a[i-1]){
            ma[a[i-1]]=max(ma[a[i-1]],curr);
            curr=1;
            continue;
        }
        curr++;
       }
       ma[a[n-1]]=max(ma[a[n-1]],curr);

       curr=1;
       for(int i=1;i<n;i++){
        if(b[i]!=b[i-1]){
            mb[b[i-1]]=max(mb[b[i-1]],curr);
            curr=1;
            continue;
        }
        curr++;
       }
       mb[b[n-1]]=max(mb[b[n-1]],curr);

       int ans=0;
       for(auto i:a){
        ans=max(ans,ma[i]+mb[i]);
       }
       for(auto i:b){
        ans=max(ans,ma[i]+mb[i]);
       }
       cout<<ans<<endl;

    }
    return 0;
}