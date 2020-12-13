#include<bits/stdc++.h>
using namespace std;

typedef size_t S;

int main(void) {
    
    S n;
    cin >> n;
    long long val, sum = 0, act_sum = 0;

    S i = 1;
    for ( ; i < n; i++) {
        cin >> val;
        act_sum += i;
        sum += val;
    }

    act_sum += ++i;

    cout << act_sum - sum - 1;
    return 0;
}