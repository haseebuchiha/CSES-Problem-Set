#include<bits/stdc++.h>
using namespace std;

typedef size_t S;

int main(void) {

    //Speed up input output
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);

    S n;
    cin >> n;
    S val;
    S preVal;
    cin >> preVal;
    unsigned long long turn=0;
    while ( --n > 0 ) {
        cin >> val;
        if (preVal > val) {
            turn += preVal - val;
        }
        else {
            preVal = val;
        }
    }
    cout << turn;
    return 0;
}