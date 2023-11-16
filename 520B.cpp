#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m, count;
    count = 0;
    cin >> n >> m;
    while ((n > m) || (n < m)){
        if (m > n)
            if (m % 2 == 0) {
                m = m/2;
                count++;
        }else{
            m++;
            count = count+1;
        }else if (n > m) {
            m;
            count = count+1;
        }
    }
    cout << count << endl;
}