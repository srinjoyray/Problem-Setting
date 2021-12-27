#include "testlib.h"
#include<bits/stdc++.h>
using namespace std;


int main(int argc, char* argv[]){
    registerGen(argc, argv, 1);
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int test_cases;
    test_cases=1;
    cout<<test_cases<<'\n';

    int maxX = 1e6;
    int maxN = 1e5;
    for(int i=1;i<=test_cases;i++){
        int n;
        n = rnd.next(maxN, maxN);
        cout<<n<<'\n';

        for(int j=1;j<=n;j++){
            int a = rnd.next(1, maxX);
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

