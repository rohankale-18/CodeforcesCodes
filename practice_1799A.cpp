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
       int n,m,post,rt=0;
       cin>>n>>m;
       set<int> pre;
       queue<int> recent;
       map<int,int> mp;
       for(int i=n;i>=1;i--){
        recent.push(i);
        pre.insert(i);
        mp[i]=-1;
       }
       for(int i=0;i<m;i++){
        cin>>post;
        rt++;
        if(!pre.count(post)){
            mp[recent.front()]=rt;
            pre.erase(recent.front());
            recent.pop();

            pre.insert(post);
            recent.push(post);
        }
       }
       for(int i=1;i<=n;i++){
        cout<<mp[i]<<" ";
       }cout<<endl;
    }
    return 0;
}