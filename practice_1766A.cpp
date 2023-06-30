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
       for(int i=1;i<=n;i=i*10){
        for(int j=1;j<=9;j++){
            if(i*j>n){
                break;
            }
            count++;
        }
       }
       cout<<count<<endl;
    }
    return 0;
}