#include "testlib.h"
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(int argc, char* argv[]){
    registerValidation(argc, argv);
    int T = 1e6;
    int test_case = inf.readInt(1, T, "testCount");
    inf.readEoln();

    ll maxN = 1e18;
    
    for (int i = 0; i < test_case; i++){
        ll n = inf.readLong(1LL, maxN, "N");
        inf.readEoln();
    }

    inf.readEof();
}
