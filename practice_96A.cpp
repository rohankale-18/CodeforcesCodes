#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define mod 1000000007
#define endl "\n"
#define fio ios_base::sync_with_stdio(false); cin.tie(NULL);

int32_t main(){
    fio;
    int flag;
    flag=0;
    string s;
    cin>>s;
    if(s.length()<7){
        cout<<"NO"<<endl;
    }
    else{
        for(int i=0;i<=s.length()-7;i++){
        string str=s.substr(i,7);
        if(str=="1111111" || str=="0000000"){
            flag=1;
            break;
        }
        else{
            flag=0;
        }
    }
    if(flag==1){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    }    
    return 0;
}