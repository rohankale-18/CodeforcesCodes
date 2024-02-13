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
       int n,m;
       int sum=0;
       cin>>n>>m;
       vector<int> a(n),b(m);
       priority_queue<int,vector<int>,greater<int>> pq;
       for(int i=0;i<n;i++){
        int x;
        cin>>x;
        pq.push(x);
       }
       for(int i=0;i<m;i++){
        int x;
        cin>>x;
        pq.pop();
        pq.push(x);
       }
       while(!pq.empty()){
        sum+=pq.top();
        pq.pop();
       }
       cout<<sum<<endl;
    }
    return 0;
}