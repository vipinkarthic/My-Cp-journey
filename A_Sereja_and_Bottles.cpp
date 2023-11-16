#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int count = 0;
    cin >> n;
    vector<int> second(n,0);
    vector<int> first(n,0);
    vector<int> arr(1000,0);
    for(int i = 0 ; i < n ; i++){
        cin >> first[i] >> second[i];
        int x = second[i];
        arr[x-1]++;
          
    }

    for(int i = 0; i < n; i++){
        int x2 = second[i];
        arr[x2-1]--;
        int x = first[i-1];
        if(arr[x-1] == 0){
            count++;
        }
        arr[x2-1]++;   
    }

    cout <<  (count) << endl;

}