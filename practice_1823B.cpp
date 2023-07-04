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
       int n,k,cnt=0;
       cin>>n>>k;
       vector<int> v(n);
       for(int i=0;i<n;i++){
        cin>>v[i];
       }
       for(int i=0;i<n;i++){
        if(v[i]%k!=(i+1)%k){
            cnt++;
        }
       }
       if(cnt==0){
        cout<<0<<endl;
       }
       else if(cnt==2){
        cout<<1<<endl;
       }
       else{
        cout<<-1<<endl;
       }

    }
    return 0;
}