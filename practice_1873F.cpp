#include<bits/stdc++.h>
#define int long long
#define uint unsigned long long
#define pb push_back
#define mp make_pair
#define vi vector<int>
#define vvi vector<vi >
#define vb vector<bool>
#define vvb vector<vb >
#define pii pair<int,int>
#define vpii vector<pair<int,int>>
#define vvpii vector<vector<pair<int,int>>>
#define fr(i,n) for(int i=0; i<(n); i++)
#define rep(i,a,n) for(int i=(a); i<=(n); i++)
#define dbg(var) cout<<#var<<"="<<var<<" "
#define tr(it, a) for(auto it=a.begin(); it!=a.end();it++)
#define all(v) v.begin(),v.end()
#define srt(v)  sort(v.begin(),v.end())
#define mxe(v)  *max_element(v.begin(),v.end())
#define mne(v)  *min_element(v.begin(),v.end())
#define unq(v)  v.resize(distance(v.begin(), unique(v.begin(), v.end())));
#define bin(x,y)  bitset<y>(x)

using namespace std;
int MOD=1e9+7;

void modadd(int &a , int b) {a=((a%MOD)+(b%MOD))%MOD;}
void modsub(int &a , int b) {a=((a%MOD)-(b%MOD)+MOD)%MOD;}
void modmul(int &a , int b) {a=((a%MOD)*(b%MOD))%MOD;}

const int N=200000;
int n,k;
vi v(N),h(N),pre(N+1,0),len(N);

bool sol(int dist){
    bool found=false;
    for(int i=0;i<n-dist+1;i++){
        if(len[i]<dist) continue;
        int sum=pre[i+dist]-pre[i];
        if(sum<=k){
            found=true;
            break;
        }
    }
    return found;
}

void solve(){
    cin>>n>>k;
    pre[0]=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        pre[i+1]=pre[i]+v[i];
    }
    for(int i=0;i<n;i++) cin>>h[i];
    len[n-1]=1;
    for(int i=n-2;i>=0;i--){
        if(h[i]%h[i+1]==0){
            len[i]=len[i+1]+1;
        }else{
            len[i]=1;
        }
    }
    int l=1,r=n;
    while(l<=r){
        int mid=(r+l)/2;
        if(sol(mid)){
            l=mid+1;
        }else{
            r=mid-1;
        }
    }
    cout<<r<<endl;

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