#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin >> n;
    int arr[n];
    for(int i =1; i<= n; i++){
        cin >> arr[i];
    }
    for(int i=n; i>=1; i--){
        cout << arr[i];
        cout << " ";
    }
    return 0;
}
