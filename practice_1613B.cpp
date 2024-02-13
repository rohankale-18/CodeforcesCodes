#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define mod 1000000007
#define endl "\n"
#define fio ios_base::sync_with_stdio(false); cin.tie(NULL);

int32_t main(){
    fio;
    int t;
    scanf("%lld", &t);
    while(t--){
       int n;
       scanf("%lld", &n);
       vector<int> v(n);
       for (int i = 0; i < n; i++) {
            scanf("%lld", &v[i]);
        }
       int y=n/2;
       int z=*min_element(v.begin(),v.end());
       for(int i=0;i<n;i++){
        if(y>0 && v[i]!=z){
            cout<<v[i]<<" "<<z<<endl;
            y--;
        }
       }
    }
    return 0;
}