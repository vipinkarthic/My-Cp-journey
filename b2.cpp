#include<bits/stdc++.h>
using namespace std;


bool primecheck(int n)
{
    if (n <= 1)
        return false;
 
    for (int i = 2; i <= n / 2; i++)
        if (n % i == 0)
            return false;
 
    return true;
}


int main() 
{ 
    int n = 114;
    int K = 4;
    vector<int> v;
    cout << "---" << endl;

    if (primecheck(n))
    {
        v.push_back(1);
        v.push_back(n);
        for(int x : v){
        cout << x << endl;
    }

    }else{
    while (n % 2 == 0){ 
        v.push_back(2);
        n = n/2; 

    } 
    int c = n;
    v.push_back(1);
    for (int i = 3; i <= n; i = i + 2) 

    { 
        while (n % i == 0) { 
            v.push_back(i);
            n = n/i; 

        } 
    } 
    int pro = 1;
    for(int x : v){
        pro = pro*x;
    }
    cout << pro << endl;

    //if(pro == )
    if (n > 2) 

        v.push_back(2);

    for(int x : v){
        cout << x << endl;
    }
}




}