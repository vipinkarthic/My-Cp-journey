#include<bits/stdc++.h>
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));

using namespace std;

int main(){
    fastread();
    int i;
    cin >> i;
    if(i%4 == 0 || i%47 == 0 || i%74 == 0 || i%444 == 0 || i%447 == 0 || i%474 == 0 || i% 477 == 0|| i%747 == 0 || i%774 == 0 || i%777 == 0 || i%7 == 0){
        cout << "YES";
    }else {
        cout <<"NO";
    }
}
