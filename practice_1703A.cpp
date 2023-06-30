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
       string s;
       cin>>s;
       if(s[0]=='y' || s[0]=='Y'){
        if(s[1]=='e' || s[1]=='E'){
            if(s[2]=='s'||s[2]=='S'){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        else{
            cout<<"NO"<<endl;
        }
       }
       else{
        cout<<"NO"<<endl;
       }
    }
    return 0;
}