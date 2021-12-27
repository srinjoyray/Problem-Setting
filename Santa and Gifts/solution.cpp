#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define mod 1000000007

const int N = 1e6+10;
ll fact[N];

ll power(ll a,ll n){
    ll res=1;
    while(n){
        if(n%2){
            res=(res*a)%mod;
        }
        a=(a*a)%mod;
        n/=2;
    }
    return res;
}

ll ncr(ll n, ll r){
    ll num,denom,inv_denom,ans;
    num = fact[n];
    denom = (fact[r]*fact[n-r])%mod;
    inv_denom = power(denom,mod-2);
    ans = (num*inv_denom)%mod;
    return ans;
}

void solve(){
    int i,j;
    int n;
    cin>>n;
    ll a[n],b[n],curr=n,unique=1,ways;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    vector<pair<ll,ll>> v;
    for(i=0;i<n;i++){
        v.push_back({a[i],i});
    }

    sort(v.begin(),v.end());

    for(i=v.size()-1;i>=0;i--){
        if(i<v.size()-1 && v[i].first != v[i+1].first){
            unique++;
            curr--;
        }
        b[v[i].second]=curr;
    }

    ways=ncr(n,unique);

    cout<<ways<<"\n";

    for(i=0;i<n;i++){
        cout<<b[i];
        if(i!=n-1){
            cout<<" ";
        }
    }
    cout<<"\n";
}   

int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t=1;
    cin>>t;
    
    fact[0]=1;
    for(int i=1;i<N;i++){
        fact[i]=(fact[i-1]*i)%mod;
    }
    
    while(t--){
        solve();
    }
}

