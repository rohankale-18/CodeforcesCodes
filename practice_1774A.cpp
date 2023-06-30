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
       int n,z1=1,o1=0;
       cin>>n;
       string s;
       cin>>s;
       for(int i=1;i<n;i++){
        if(s[0]=='1'){
            if(s[i]=='1'){
                z1++;
                if(z1%2==0){
                    cout<<"-";
                }
                else{
                    cout<<"+";
                }
            }
            else{
                cout<<"+";
            }
        }
        else{
            if(s[i]=='1'){
                o1++;
                if(o1%2==0){
                    cout<<"-";
                }
                else{
                    cout<<"+";
                }
            }
            else{
                cout<<"+";
            }
        }
            
       }
       cout<<endl;
    }
    return 0;
}