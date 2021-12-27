#include<bits/stdc++.h>
using namespace std;

const int N=2e6;

int spf[N],present[N];
bool prime[N + 1];
vector<int> v_prime;


void sieve()
{
    memset(prime, true, sizeof(prime));
    
    spf[1] = 1;
    prime[0]=false; prime[1]=false;
    
    for(int i=2; i<N; i++){
        spf[i] = i;
    }

    for (int p = 2; p * p <= N; p++){
        if (prime[p] == true){
            for(int i = p * p; i <= N; i += p){
                prime[i] = false;
                spf[i] = p;
            }
        }
    }

    for(int p=2;p<=N;p++){
        if(prime[p]){
            v_prime.push_back(p);
        }
    }
    
}

void solve(){
    int i,j;
    int n;
    cin>>n;
    int a[n],temp,ans;
    set<int> present_primes;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    
    for(i=0;i<n;i++){
        
        while(spf[a[i]] != a[i]){
            temp = spf[a[i]];
            present[temp]++;
            present_primes.insert(temp);
            while(a[i]%temp == 0){
                a[i]/=temp;
            }
        }

        present[a[i]]++;
        present_primes.insert(a[i]);

    }

    for(i=0;i<v_prime.size();i++){
        if(present[v_prime[i]]==0){
            ans = v_prime[i];
            break;
        }
    }
    for(auto it : present_primes){
        present[it] = 0;
    }

    cout<<ans<<'\n';
}

int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t=1;
    cin>>t;
    sieve();
    while(t--){
        solve();
    }
    
}

