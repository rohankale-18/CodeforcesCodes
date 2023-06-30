#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define mod 1000000007
#define endl "\n"
#define fio ios_base::sync_with_stdio(false); cin.tie(NULL);

int32_t main(){
    fio;
    int n,m,check=0;
    cin>>n>>m;
    int a[m];
    for(int i=0;i<m;i++){
        cin>>a[i];
    }
    sort(a,a+m);
    int ans=a[n-1]-a[0];
    for(int i=1;i<=m-n;i++){
        if(a[i+n-1]-a[i]<ans){
            ans=a[i+n-1]-a[i];
        }
    }
    cout<<ans<<endl;
    return 0;
}