#include <iostream>
using namespace std;

int rec_fun(int n) {
    if (n>=0) {
        cout << n << endl;
        return rec_fun(n-1);
    } else {
        return 0;
    }
}

int main() {
    int var = rec_fun(n: 10);

    return 0;
}