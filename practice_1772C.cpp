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
       int k,n,z=1,diff=1;
       cin>>k>>n;
       for(int i=1;i<=k;i++){
        cout<<z<<" ";
        if(n-(z+diff)>=(k-i-1)){
            z+=diff;
            diff++;
        }
        else{
            z++;
        }
       }cout<<endl;
    }
    return 0;
}