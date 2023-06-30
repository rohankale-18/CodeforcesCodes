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
       s=s.substr(0,s.size()/2);
       int uni=unique(s.begin(),s.end())-s.begin();
       if(uni==1){
        cout<<"NO"<<endl;
       }
       else{
        cout<<"YES"<<endl;
       }
    }
    return 0;
}