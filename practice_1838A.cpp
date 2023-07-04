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
       int n,flag=0,x=0;
       cin>>n;
       vector<int> v(n);
       for(int i=0;i<n;i++){
        cin>>v[i];
        if(v[i]<0){
            x=v[i];
            flag=1;
        }
       }
       if(flag){
        cout<<x<<endl;
       }
       else{
        int m=*max_element(v.begin(),v.end());
        cout<<m<<endl;
       }
    }
    return 0;
}