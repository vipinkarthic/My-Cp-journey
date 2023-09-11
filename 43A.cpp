#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a,b = 0;
    string t1,t2,t;
    for(int i = 0;i<n;i++){
        if(i ==0){
            cin >> t1;
            a++;
        }else{
            cin >> t;
            if(t == t1){
                t1 = t;
                a++;
            }else{
                t2 = t;
                b++;
            }

        }
    }
    
    if (a>b){
        cout << t1;
    }else{
        cout << t2;
    }
 }
