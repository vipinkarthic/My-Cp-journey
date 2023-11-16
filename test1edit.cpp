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
    int n = 175;
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

    int start = -1;     
    int end = -1;      
    int minSize = 2147483647;

    for(int i = 0; i < v.size(); i++) {
        int currentSum = 0;
        for(int j = i; j < v.size() && (j - i + 1) < minSize; j++) {
            currentSum += v[j];
            if(currentSum == K) {
                start = i;
                end = j;
                minSize = end - start + 1;
                break;
            }
        }
    }

    if(start == -1 || end == -1)  {
        cout << "-1" << endl;
    }else{
        while(start <= end) {
        cout << v[start] << " ";
        start++;
        }

    }
}