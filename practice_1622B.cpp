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
       string s;
       cin>>n;
       vector<int> v(n);
       vector<pair<int,int>> liked,disliked;
       for(int i=0;i<n;i++){
        cin>>v[i];
       }
       cin>>s;
       for(int i=0;i<n;i++){
        if(s[i]=='1'){
            liked.push_back({v[i],i});
        }else{
            disliked.push_back({v[i],i});
        }
       }   
       sort(liked.begin(), liked.end(), greater <>());    
       sort(disliked.begin(), disliked.end(), greater <>());
       int curr=n;
       vector<int> ans(n);
       for(auto x:liked){
        ans[x.second]=curr;
        curr--;
       }
       for(auto x:disliked){
        ans[x.second]=curr;
        curr--;
       }
       for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
       }cout<<endl;
    }
    return 0;
}