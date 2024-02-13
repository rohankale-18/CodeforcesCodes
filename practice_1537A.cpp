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
       int n,sum=0;
       cin>>n;
       vector<int> v(n);
       for(int i=0;i<n;i++){
        cin>>v[i];
        sum+=v[i];
       }
       if(sum<n){
        cout<<1<<endl;
       }
       else{
        cout<<sum-n<<endl;
       }
    }
    return 0;
}