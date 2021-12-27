#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const int N=1e6+10;

const ll inf = 1e15;
ll no_of_digits(ll num){
    ll count=0;
    while(num){
        count++;
        num/=10;
    }
    return count;
}
ll make(ll start,ll digits){
    ll num = start;
    for(int i=2;i<digits;i+=2){
        num = (num*100) + start;
    }
    return num;
}
ll get_start(ll num){
    while(num>=100){
        num/=10;
    }
    return num;
}
void solve(){
    int i,j;
    
    ll num,digits;
    cin>>num;
    digits = no_of_digits(num);

    if(digits%2==1){
        ll low,high;
        if(digits==1){
            cout<<"10\n";
            return;
        }
        
        low = make(99,digits-1);
        high = make(10,digits+1);

        if(abs(num-low)<= abs(num-high)){
            cout<<low<<'\n';
        }
        else{
            cout<<high<<'\n';
        }
    }
    else{
        ll low,same,high,start;

        start = get_start(num);

        if(start == 10){
            same = make(start,digits);
            high = make(start+1,digits);

            if(abs(num-same)<=abs(num-high)){
                cout<<same<<'\n';
            }
            else{
                cout<<high<<'\n';
            }
        }
        else if(start == 99){
            low = make(start-1,digits);
            same = make(start,digits);

            if(abs(num-low)<=abs(num-same)){
                cout<<low<<'\n';
            }
            else{
                cout<<same<<'\n';
            }
        }
        else{
            low = make(start-1,digits);
            same = make(start,digits);
            high = make(start+1,digits);

            if(abs(num-low) <= abs(num-same) && abs(num-low) <= abs(num-high)){
                cout<<low<<'\n';
            }
            else if(abs(num-same) <= abs(num-low) && abs(num-same) <= abs(num-high)){
                cout<<same<<'\n';
            }
            else{
                cout<<high<<'\n';
            }
        }
    }

}

int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}

