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
       int n,flag=0;
       cin>>n;
       vector<int> v(n);
       for(int i=0;i<n;i++){
        cin>>v[i];
       }
       for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(__gcd(v[i],v[j])<=2){
                flag=1;
                break;
            }
        }
        if(flag){
            break;
        }
       }
       if(flag){
        cout<<"YES"<<endl;
       }
       else{
        cout<<"NO"<<endl;
       }
    }
    return 0;
}