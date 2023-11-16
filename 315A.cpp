#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int count = 0;
    cin >> n;
    vector<int> second(n,0);
    vector<int> first(n,0);
    vector<int> arr(1001,0);
    for(int i = 0 ; i < n ; i++){
        cin >> first[i] >> second[i];
        int x = second[i];
        arr[x]++;
          
    }

    for(int i = 0; i < n; i++){
        int x2 = second[i];
        arr[x2]--;
        int x = first[i];
        if(arr[x] == 0){
            count++;
        }
        arr[x2]++;   
    }

    cout <<  (count) << endl;

}