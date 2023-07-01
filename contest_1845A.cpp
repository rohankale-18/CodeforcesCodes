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
       if(x!=1){
        cout<<"YES"<<endl;
        cout<<n<<endl;
        for(int i=0;i<n;i++){
            cout<<1<<" ";
        }cout<<endl;
       }
       else if(k==1){
        cout<<"NO"<<endl;
       }
       else if(k==2){
        if(n%2==0){
            cout<<"YES"<<endl;
            cout<<n/2<<endl;
            for(int i=0;i<n/2;i++){
                cout<<2<<" ";
            }cout<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
       }
       else{
            cout<<"YES"<<endl;
        if(n%2==0){
            cout<<n/2<<endl;
            for(int i=0;i<n/2;i++){
                cout<<2<<" ";
            }
        }
        else{
            cout<<(n-1)/2<<endl;
            cout<<3<<" ";
            for(int i=0;i<(n-3)/2;i++){
                cout<<2<<" ";
            }
        }
       }
    }
    return 0;
}