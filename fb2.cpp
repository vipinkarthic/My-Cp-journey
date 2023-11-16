#include <iostream>
#include <vector>

using namespace std;

void minsubarray(vector<int>& array, int k) {
    int start = -1;     
    int end = -1;      
    int minSize = INT_MAX;

    for(int i = 0; i < array.size(); i++) {
        int currentSum = 0;
        for(int j = i; j < array.size() && (j - i + 1) < minSize; j++) {
            currentSum += array[j];
            if(currentSum == k) {
                start = i;
                end = j;
                minSize = end - start + 1;
                break;
            }
        }
    }

    if(start == -1 || end == -1)  {
        cout << "-1" << endl;
        return;
    }
    while(start <= end) {
        cout << array[start] << " ";
        start++;
    }
}

int main() {
    vector<int> array = {7,17,17};  
    int k = 41;
    minsubarray(array, k);
}