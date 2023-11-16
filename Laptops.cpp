#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    pair<int,int> laptop_price_quality[n];
    for(int i=0;i<n;i++){
        cin>>laptop_price_quality[i].first>>laptop_price_quality[i].second;
    }
    sort(laptop_price_quality,laptop_price_quality+n);
    for(int j=0;j<n-1;j++){
        if(laptop_price_quality[j].first<laptop_price_quality[j+1].first && laptop_price_quality[j].second>laptop_price_quality[j+1].second){
            cout<<"Happy Alex";
            exit(0);
            }
    }
    cout<<"Poor Alex";
}