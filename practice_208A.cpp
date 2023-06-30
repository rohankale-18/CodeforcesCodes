#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define mod 1000000007
#define endl "\n"
#define fio ios_base::sync_with_stdio(false); cin.tie(NULL);

int32_t main(){
    fio;
    string s;
    cin>>s;
    bool space=true;
    for(int i=0;i<s.length();i++){
        if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B'){
            i=i+2;
            if(!space){
                cout<<" ";
            }
            continue;
        }
        else{
            space=false;
            cout<<s[i];
        }
    }
    return 0;
}