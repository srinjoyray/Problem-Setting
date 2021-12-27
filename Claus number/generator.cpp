#include "testlib.h"
#include<bits/stdc++.h>
using namespace std;

int main(int argc, char* argv[]){
   
    registerGen(argc, argv, 1);
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int test_cases;    
    test_cases=1e6;
    
    println(test_cases);

    long long maxN = 1e18;
    
    for(int i=1;i<=test_cases;i++){
        long long n = rnd.next(1LL, maxN);
        n = maxN;
        println(n);
    }
    
}

