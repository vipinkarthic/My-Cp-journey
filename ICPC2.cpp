#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  int t;
  cin>>t;
  while(t--){
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    // for(int i= 0 ; i < n  ; i++){
    //   cout << a[i] << " ";
    // }
    // cout << endl;
    int m=0;
    if(k==1){
        cout<<a[n-2]<<" "<<a[n-2]<<"\n";
        continue;
    }
    int valmin=0,valmax=0;
    for(int i=n-1;i>0;i-=2)
    {
        if(m==k) break;
        if(a[i]==a[i-1]){
            valmax+=a[i];
            a[i] == 0;
            m++;

        }
        else{
            valmax+=a[i-1];
            a[i] == 0;
            m++;
        }
    } 
    m=0;
    // valmin = a[0];

    int tempmax(0);
    for(int i = 0 ; i < n ; i++){
      if (a[i] > tempmax){
        tempmax = a[i];
      }
    }
    int hash[tempmax] = {0};
    // for(int i=n-2;i>2;i--)
    // {
    //     if(hash[a[i]] != 1 && hash[a[i]] != 0){
    //       hash[a[i]] = hash[a[i]]%1;
    //     }
    //     if(hash[a[i]] == 0){
    //     if(m==k-1) break;
    //     if(a[i]==a[i-2]){
    //         // cout << "VALUES" << a[i-2] << endl;
    //         valmin+=a[i-2];
    //         m++;
    //         hash[a[i-2]]++;

    //     }
    //     else{
    //         // cout << "VALUES" << a[i-2] << endl;
    //         valmin+=a[i-2];
    //         m++;
    //         hash[a[i-2]]++;

    //     }
    //   }
    // }
    for(int i = 0; i < n-1; i++){
      valmin += a[i];
    }
    cout<<valmin<<" "<<valmax<<"\n";

}
return 0;
}
