#include<bits/stdc++.h>
#define int long long
#define uint unsigned long long
#define si(x)  scanf("%d",&x)
#define sl(x)  scanf("%lld",&x)
#define ss(s)  scanf("%s",s)
#define pi(x)  printf("%d ",&x)
#define pl(x)  printf("%lld ",&x)
#define ps(s)  printf("%s ",s)
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
#define nl cout<<"\n"
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


void solve(){
    int n;
    cin>>n;
    vi v(n);
    fr(i,n){
        cin>>v[i];
    }
    int ans=-1;
    for(int d=1;d<=n;++d){
        if(n%d == 0){
            int mx=-1e18,mn=1e18;
            for(int i=0;i<n;i+=d){
                int sm=0;
                for(int j=i;j<i+d;++j){
                    sm+=v[j];
                }
                mx=max(mx,sm);
                mn=min(mn,sm);
            }
            ans=max(ans,mx-mn);
        }
    }
    cout<<ans<<endl;    
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