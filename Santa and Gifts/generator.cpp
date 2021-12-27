#include "testlib.h"
#include<bits/stdc++.h>
using namespace std;

int main(int argc, char* argv[]){
    registerGen(argc, argv, 1);
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int test_cases;
    test_cases=10;
    cout<<test_cases<<'\n';

    int maxN = 1e5;
    int maxA = 1e9;
    for(int i=1;i<=test_cases;i++){
        int n = rnd.next(1, maxN);
        cout<<n<<'\n';

        for(int j=1;j<=n;j++){
            int a = rnd.next(1, maxA);
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

