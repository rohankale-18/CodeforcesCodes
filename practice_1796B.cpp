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
       string a,b;
       int flag=0;
       cin>>a>>b;
       int n=a.size();
       int m=b.size();
       if(a==b){
        cout<<"YES"<<endl;
        cout<<a<<endl;
        continue;
       }
       if(n==1 && m==1){
        if(a!=b){
            cout<<"NO"<<endl;
            continue;
        }
       }
       if(a[0]==b[0]){
        cout<<"YES"<<endl;
        cout<<a[0]<<'*'<<endl;
       }
       else if(a[n-1]==b[m-1]){
        cout<<"YES"<<endl;
        cout<<'*'<<a[n-1]<<endl;
       }
       else{
        int flag=0;
        for(int i=0;i<m-1;i++){
            string s=b.substr(i,2);
            if(a.find(s)!=string::npos){
                cout<<"YES"<<endl;
                cout<<'*'<<s<<'*'<<endl;
                flag=1;
                break;
            }
        }
        if(!flag){
            cout<<"NO"<<endl;
        }
       }
    }
    return 0;
}