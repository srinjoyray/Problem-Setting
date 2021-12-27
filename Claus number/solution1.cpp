#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

set<ll> special_nos;
const ll inf = INT64_MAX;

void solve(){
    int i,j;
    
    ll num,ans,temp,mn=inf,value;
    
    cin>>num;
   
    if(special_nos.lower_bound(num)!= special_nos.end()){
        value = (*special_nos.lower_bound(num));
        temp = value-num;
        
        if(temp<mn){
            mn=temp;
            ans=value;
        }
    }
    if(*special_nos.begin()<num){
        value = *(--special_nos.upper_bound(num));
        temp = num - value;
       
        if(temp<mn){
            mn=temp;
            ans=value;
        }
    }

    cout<<ans<<'\n';
}

int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t,i,j,k;
    
    string base,temp;
    for(int i=10;i<=99;i++){
        temp="";
        base=to_string(i);            
        for(j=1;j<=9;j++){
            temp+=base;
            special_nos.insert(stoll(temp));
        }
        
    }

    cin>>t;
    while(t--){
        solve();
    }
    
}

