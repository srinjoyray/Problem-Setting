#include "testlib.h"
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(int argc, char* argv[]){
    registerValidation(argc, argv);
    int T = 1e3;
    int test_case = inf.readInt(1, T, "testCount");
    inf.readEoln();

    int maxN = 1e5, maxA=1e6;
    
    for (int i = 0; i < test_case; i++){
        int n = inf.readInt(1, maxN, "N");
        inf.readEoln();
        for(int j=1;j<=n;j++){
            int a = inf.readInt(1, maxA, "A");

            if(j!=n){
                inf.readSpace();
            }
            else{
                inf.readEoln();
            }
        }
    }

    inf.readEof();
}
