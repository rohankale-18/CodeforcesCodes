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
       int n,k,q;
       cin>>n>>k>>q;
       vector<int> v;
       int z=0;
       for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x<=q){
            z++;
        }
        else{
            if(z>0){
                v.push_back(z);
                z=0;
            }
        }
       }
       if(z>0){
        v.push_back(z);
       }
       int sum=0;
       for(int i=0;i<v.size();i++){
        for(int j=k;j<=v[i];j++){
            sum+=v[i]-j+1;
        }
       }
       cout<<sum<<endl;
    }
    return 0;
}