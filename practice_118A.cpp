#include<bits/stdc++.h>
#include<cctype>
using namespace std;
#define int long long int
#define mod 1000000007
#define endl "\n"
#define fio ios_base::sync_with_stdio(false); cin.tie(NULL);

bool vowel(char a){
    string s="aeiouyAEIOUY";
    for(auto it:s){
        if(it==a){
            return true;
        }
    }
    return false;
}
int32_t main(){
    fio;
    string s,ans;
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(!vowel(s[i])){
            ans.push_back('.');
            ans.push_back(tolower(s[i]));
        }
    }
    cout<<ans<<endl;
    return 0;
}