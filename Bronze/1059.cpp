#include <iostream>
#include <vector> 
#include <algorithm>
#include <cstdio>

using namespace std;

void abc(vector<int>& arr) {
    sort(arr.begin(), arr.end());
    int target = arr[6]-arr[0]-arr[1];
    
    for (int num : arr) {
        if (num == target)  {
            printf("%d %d %d", arr[0], arr[1], num);
            return;
        }
    }
}

int main() {
    vector<int> inp = {0,0,0,0,0,0,0};
    scanf(
        "%d %d %d %d %d %d %d",
        &inp[0],&inp[1],&inp[2],&inp[3],&inp[4],&inp[5],&inp[6]
    );
    abc(inp);
    return 0;
}