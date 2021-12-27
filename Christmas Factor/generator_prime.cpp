#include "testlib.h"
#include<bits/stdc++.h>
using namespace std;

const int N=1e6;
bool prime[N + 1];
vector<int> v_prime;
void sieveOfEratosthenes()
{
    memset(prime, true, sizeof(prime));
    for (int p = 2; p * p <= N; p++)
    {
        if (prime[p] == true){
            for (int i = p * p; i <= N; i += p)
                prime[i] = false;
        }
    }
    prime[0]=false; prime[1]=false;

    for(int p=N;p>=2;p--){
        if(prime[p]){
            v_prime.push_back(p);
        }
    }
}
int main(int argc, char* argv[]){
    registerGen(argc, argv, 1);
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    sieveOfEratosthenes();
    
    int test_cases;
    test_cases=1;
    cout<<test_cases<<'\n';
    int maxX = 1e6;
    int maxN = 1e5;
    for(int i=1;i<=test_cases;i++){
        int n;
        n = rnd.next(1, maxN);
        
        cout<<n<<'\n';
        for(int j=1;j<=n;j++){
            int a;
            if(j>v_prime.size()){
                a=v_prime[0];
            }
            else{
                a = v_prime[j-1];
            }
            cout<<a;
            if(j!=n){
                cout<<" ";
            }
            else{
                cout<<'\n';
            }
        }

    }
    
}

