#include <vector>
#include <iostream>
using namespace std;

void duplicateZeros(vector<int>& arr) {
    int n = arr.size();

    int zeros = 0;
    for(int x : arr)
        if(x == 0)
            zeros++;

    int i = n - 1;
    int j = n + zeros - 1;

    while(i >= 0) {

        if(j < n)
            arr[j] = arr[i];

        if(arr[i] == 0) {
            j--;

            if(j < n)
                arr[j] = 0;
        }

        i--;
        j--;
    }
}

int main() {
    vector<int> arr = {1,0,2,3,0,4,5,0};
    duplicateZeros(arr);

    for(int x : arr)
        cout << x << " ";

} 
 
