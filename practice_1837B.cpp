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
       int n=2,lt=0,gt=0;
       string s;
       cin>>s;
       for(int i=0;i<s.size()-1;i++){
        if(s[i]=='<'){
            n++;
            if(s[i+1]=='>'){
                n--;
            }
            else{

            }
        }
       }
    }
    return 0;
}