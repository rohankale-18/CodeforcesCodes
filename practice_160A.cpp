#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define mod 1000000007
#define endl "\n"
#define fio ios_base::sync_with_stdio(false); cin.tie(NULL);

int32_t main(){
    fio;
    int n;
    cin>>n;
    int a[n],sum=0,t1=0,count=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sum=accumulate(a,a+n,sum);
    int half=sum/2;
    sort(a,a+n);
    for(int i=n-1;i>=0;i--){
        t1+=a[i];
        count++;
        if(t1>half){
            break;
        }
    }
    cout<<count<<endl;
    return 0;
}