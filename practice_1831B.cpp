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
       cin>>n;
       vector<int> a,b;
       for(int i=0;i<n;i++){
        int x;
        cin>>x;
        a.push_back(x);
       }
       for(int i=0;i<n;i++){
        int x;
        cin>>x;
        b.push_back(x);
       }
       int curr1=1,num1=a[0],max1=1;
       for(int i=0;i<n-1;i++){
        if(a[i]==a[i+1]){
            curr1++;
        }
        else{
            curr1=1;
        }
        if(curr1>max1){
            max1=curr1;
            num1=a[i];
        }
       }
       int curr2=1,num2=b[0],max2=1;
       for(int i=0;i<n-1;i++){
        if(b[i]==b[i+1]){
            curr2++;
        }
        else{
            curr2=1;
        }
        if(curr2>max2){
            max2=curr2;
            num2=b[i];
        }
       }
       if(num1==num2){
        cout<<max1+max2<<endl;
       }
       else{
        cout<<max(max1,max2)<<endl;
       }
    }
    return 0;
}