#include <iostream>
using namespace std;
int main() { 
    int a, b, i, sum = 0;

    cin >> a >> b;
    for(i = a; i <= b; i++){
        if(i % 2 == 0){
            sum += i;
        } 
        // i % 2 == 0 ? sum+=i : sum = sum;
    }
    cout << sum;
    return 0;
}