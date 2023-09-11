#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x, count;
    count = 0;
    cin >> n >> x;
    for (int i = 1; i <= n; i++){
        if (x % i == 0 and x / i <= n){
            count++;
        }
    }

    cout << count << endl;
}
