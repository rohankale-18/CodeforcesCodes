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
       vector<int> v(n);
       for(int i=0;i<n;i++){
        cin>>v[i];
       }
       sort(v.begin(),v.end());
       map<int,int> mp;
       for(auto i:v){
        mp[i]++;
       }
       int flag=1;
       if(*max_element(v.begin(),v.end()) > n){
        flag=0;
       }
       for(int i=1;i<=n;i++){
        if(mp[i]>mp[i-1]){
            flag=0;
        }
       }
       if(flag) cout<<"YES"<<endl;
       else cout<<"NO"<<endl;
    }
    return 0;
}