#include <iostream>
using namespace std;
int main() {
    int a, count;
    cin >> a;

    for(int i = 0; i < a; i++){
        count = -(i/2)*2+1;
        for(int j = 0; j < a; j++){
            if(i ==0){
                cout << "* ";
                continue;
            }
            if(j==0){
                cout << " ";
                count++;
                continue;
            }

            if(j % 2 == 1 && count > 0){
                cout << " *";
            }
            else{
                cout << "  ";
                count++;
            }

        }
        cout << endl;
    }
    
    return 0;
}