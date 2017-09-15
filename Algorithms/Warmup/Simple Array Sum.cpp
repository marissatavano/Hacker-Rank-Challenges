#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;


int main() {
	
    int n;
    cin >> n;
	
    vector<int> arr(n);
	
    for(int arr_i = 0; arr_i < n; arr_i++) {
       cin >> arr[arr_i];
    }
    
    int sum=0;
    for(int j = 0; j < n; j++) {
        sum = sum+arr[j];
    }
    
    cout << sum << endl;
	
    return 0;
	
}

