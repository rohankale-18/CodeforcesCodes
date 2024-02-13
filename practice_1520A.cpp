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
       string s;
       cin>>n>>s;
       int flag=0;
       vector<char> v(n);
       string result;
       std::unique_copy(s.begin(), s.end(), std::back_inserter(result));
       for(int i=0;i<result.size();i++){
        if(v.size()==0 || std::find(v.begin(),v.end(),result[i])==v.end()){
            v.push_back(s[i]);
        }
        else{
            flag=1;
            break;
        }
       }
       if(flag){
        cout<<"NO"<<endl;
       }
       else{
        cout<<"YES"<<endl;
       }
    }
    return 0;
}