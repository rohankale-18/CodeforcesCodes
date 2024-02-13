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
       int n,count=0;
       cin>>n;
       vector<int> v(n),av(n);
       for(int i=0;i<n;i++){
        cin>>v[i];
       }
       int x=v[0];
       for(int i=0;i<n;i++){
        x&=v[i];
        if(x==0){
            count++;
            x=INT_MAX;
        }
       }
       if(count==0)count++;
       cout<<count<<endl; 
    }
    return 0;
}