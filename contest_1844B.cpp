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
       vector<int> v(n);
       v[0]=2;
       v[n-1]=3;
       v[n/2]=1;
       int val=4;
       for(int i=1;i<n-1;i++){
        if(i==n/2){
            continue;
        }
        else{
            v[i]=val;
            val++;
        }
       }
       for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
       }cout<<endl;
    }
    return 0;
}