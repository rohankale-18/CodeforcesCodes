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
        vector<string> v;
        for(int i=0;i<n-1;i++){
            v.push_back(s.substr(i,2));
        }
        sort(v.begin(), v.end());
        vector<string>::iterator ip;
        ip = unique(v.begin(), v.end());
        v.resize(distance(v.begin(), ip));
        cout<<v.size()<<endl;
    }
    return 0;
}
