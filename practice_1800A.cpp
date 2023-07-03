#include<bits/stdc++.h>
#include <algorithm>
using namespace std;
#define int long long int
#define mod 1000000007
#define endl "\n"
#define fio ios_base::sync_with_stdio(false); cin.tie(NULL);

bool meowing(string s) {

    int n = s.length();
    int i = 0,flag=0;

    while (i < n && s[i] == 'm'){
        flag=1;
        i++;
    }
    if(flag!=1){
        return false;
    }
    while (i < n && s[i] == 'e'){
        flag=2;
        i++;
    }
    if(flag!=2){
        return false;
    }
    while (i < n && s[i] == 'o'){
        flag=3;
        i++;
    }
    if(flag!=3){
        return false;
    }
    while (i < n && s[i] == 'w'){
        flag=4;
        i++;
    }
    
    if(flag!=4){
        return false;
    }
    if(i<n){
        return false;
    }
    return true;
}

int32_t main(){
    fio;
    int t;
    cin>>t;
    while(t--){
       int n;
       string a="meow";
       string s;
       cin>>n>>s;
       for(int i=0;i<n;i++){
        s[i]=(tolower(s[i]));
       } 
       if(meowing(s)){
        cout<<"YES"<<endl;
       }
       else{
        cout<<"NO"<<endl;
       }
    }
    return 0;
}