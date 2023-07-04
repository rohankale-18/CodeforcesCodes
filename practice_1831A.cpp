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
       vector<int> a(n),b(n);
       for(int i=0;i<n;i++){
        cin>>a[i];
        a[i]=n+1-a[i];
       }
       for(auto i:a){
        cout<<i<<" ";
       }cout<<endl;

    }
    return 0;
}