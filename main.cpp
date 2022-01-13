#include <iostream>
using namespace std;
int main() {
    for (int j = 0; j < 6; j++) {
        for (int i = 0; i < 6 - j; i++) {
            if(i == 0) {
                cout << "&";
            } else {
                cout << " &";
            }
        }
        cout << endl;
    }
    return 0;
}
