#include<bits/stdc++.h>
#define int long long

using namespace std;
const int LIM=2e5+7;
int n;
pair<int,int> v[LIM];

bool fun(int mid){
    pair<int,int> x={0,0};
    for(int i=0;i<n;i++){
        x.first-=mid;
        x.second+=mid;
        x={max(x.first,v[i].first),min(x.second,v[i].second)};
        if(x.first>x.second) return false;
    }
    return true;
}

void solve(){
    cin>>n;
    for(int i=0;i<n;i++){
        cin >> v[i].first >> v[i].second;
    }
    int low=0,high=1e9+7;
    while(low<high){
        int mid=low+(high-low)/2;
        if(fun(mid)) high=mid;
        else low=mid+1;
    }
    cout<<low<<endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int T = 1;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}
