#include<bits/stdc++.h>
using namespace std;
//more than a in front and less than b in back
int main(){
    int n,a,b,temp,min_pos;
    cin >> n >> a >> b;
    if(a+b == n){
        cout << b;
    }else{
        temp = a;
        min_pos = n-a;
        if(b>min_pos){
            cout << min_pos;
        }else{
            cout << b+1;
        }
    }
}