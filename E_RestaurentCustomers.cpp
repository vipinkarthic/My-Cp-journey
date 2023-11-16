#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }    
    int norg = n-1;
    sort(arr,arr+n);
    int q; cin >> q;

    for(int i = 0 ; i < q ; i++){
        int var; cin >> var;
        n = norg;
        int j = 0;
        while(j<=n){
            int mid = (j+n )/2;
            if(arr[mid] == var){
                break;
            } else if( arr[mid] < var){
                j = mid+1;
            } else if( arr[mid] > var){
                n = mid-1;
            }
        }

        if(arr[j] == var){
        	cout << j+1 << endl;

        }else if(j <= norg/2){
            cout << j << endl;
        }else if(j > norg/2){
        	cout << j << endl;
        }
    }
}

// 3 6 8 10 11
// 1-0 ; 10-3 ; 3-0; 11-4;

//123 168 714 868 987
// 424-
