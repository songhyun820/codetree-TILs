#include <iostream>
using namespace std;
int main() {
    int a, i, j, k;
    cin >> a;
    for (i=a; i > 0; i--){
        for(j=0; j <i; j++){
            for(k=0; k<i; k++){
                cout<< "*";
            }
            cout << " ";
        }
        cout << endl;
    }
    return 0;
}