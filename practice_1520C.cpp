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
       int k=1;
       if(n==2){
        cout<<-1<<endl;
        continue;
       }
       for(int i=1;i<=n*n;i++){
            cout<<k<<" ";
            if(k==n*n || k==n*n-1){
                k=0;
            }
            k+=2;
            if(i%n==0){
                cout<<endl;
            }
       }
    }
    return 0;
}