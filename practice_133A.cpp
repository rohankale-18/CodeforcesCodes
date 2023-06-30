#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define mod 1000000007
#define endl "\n"
#define fio ios_base::sync_with_stdio(false); cin.tie(NULL);

int32_t main(){
    fio;
    int flag=0;
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++){
        if(s[i]=='H' || s[i]=='Q' || s[i]=='9'){
            flag=1;
            break;
        }
    }
    if(flag){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}