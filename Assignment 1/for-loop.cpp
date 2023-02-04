#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int a, b;
    
    cin >> a >> b;
    for(int n =a; n<=b; n++){
        if(n <10){
            switch(n){
                case 1: cout << "one\n";break;
                case 2: cout << "two\n";break;
                case 3: cout << "three\n";break;
                case 4: cout << "four\n";break;
                case 5: cout << "five\n";break;
                case 6: cout << "six\n";break;
                case 7: cout << "seven\n";break;
                case 8: cout << "eight" << endl;break;
                case 9: cout << "nine" << endl;break;
            }
        }
        else if(n%2 == 0){
            cout << "even\n";
        }
        else{
            cout << "odd\n";
        }
    }
    
    
    return 0;
}
