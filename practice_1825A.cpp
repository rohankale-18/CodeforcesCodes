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
       unordered_set<char> u;
       for(int i=0;i<s.size();i++){
        u.insert(s[i]);
       }
       if(u.size()==1){
        cout<<-1<<endl;
       }
       else{
        cout<<s.size()-1<<endl;
       }
    }
    return 0;
}