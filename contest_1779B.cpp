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
       if(n%2==0){
        cout<<"YES"<<endl;
        for(int i=0;i<n/2;i++){
            cout<<1<<" "<<-1<<" ";
        }
        cout<<endl;
       }
       else{
        if(n==3){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
            for(int i=0;i<n;i++){
                if(i%2==0)
                cout<<n/2 -1<<" ";
                else{
                    cout<<"-"<<(n/2)<<" ";
                }
            }cout<<endl;
        }
       }
    }
    return 0;
}