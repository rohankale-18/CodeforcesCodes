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
       int n,flag=0;
       cin>>n;
       string d,s;
       cin>>d>>s;
       for(int i=0;i<n;i++){
        string x;
        x=s[i];
        if(stoi(d)>stoi(x)){
            s=s.substr(0,i)+d+s.substr(i,n);
            flag=1;
            break;
        }
       }
       if(!flag){
        s=s+d;
       }
       cout<<s<<endl;
    }
    return 0;
}