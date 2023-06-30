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
       int n,k,x;
       cin>>n>>k>>x;
       vector<int> v;
       while(n>=0){
        n=n-k;
        if(n>=k){
            // cout<<k<<endl;
            v.push_back(k);
        }
        else{
            if(k!=1){
                int y=k-1;
                if(y==x){
                    y-=1;
                    k=y;
                }
            }
        }

       }
       int sum;
       sum=accumulate(v.begin(),v.end(),0);
       cout<<sum<<endl;
       if(sum==n){
        cout<<"YES"<<endl;
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }cout<<endl;
       }
       else{
        cout<<"NO"<<endl;
       }
    }
    return 0;
}