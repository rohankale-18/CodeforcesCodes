#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define mod 1000000007
#define endl "\n"
#define fio ios_base::sync_with_stdio(false); cin.tie(NULL);

int32_t main(){
    fio;
    int n,count=1,maxc=0;
    cin>>n;
    int a[n];
    if(n==1){
        cout<<1<<endl;
        return 0;
    }
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=1;i<n;i++){
        if(a[i-1]<=a[i]){
            count++;
            
        }
        else{
            count=1;
        }
        if(count>maxc){
            maxc=count;
        }
    }
    cout<<maxc<<endl;
    return 0;
}