#include<bits/stdc++.h>
#include<queue>
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
        cin >> n; // Initialize n with a valid value
        int ans=0;
        vector<int> v(n);
        priority_queue<int> q;
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        for(int i=0;i<n;i++){
            if(v[i]==0){
                if(q.size()>0){
                    ans+=q.top();
                    q.pop();
                }
            }
            else{
                q.push(v[i]);
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
