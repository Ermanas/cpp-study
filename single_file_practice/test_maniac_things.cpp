#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, q;
    cin >> n >> q;
    
    vector<vector<int>> vec_arr(n);
    
    for (int i = 0; i < n; ++i)
    {
        int arr_size;
        cin >> arr_size;
        for (int j = 0; j < arr_size; ++j)
        {
            int get_elements;
            cin >> get_elements;
            vec_arr[i].emplace_back(get_elements);
        }
    }
    
    for (int count = 0; count < n; ++count)
    {
        int i, j;
        
        cin >> i >> j;
        cout << vec_arr.at(i).at(j) << endl;
    }
    
    return 0;
}