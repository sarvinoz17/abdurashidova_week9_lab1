#include <iostream>
using namespace std;

double ser(int n) {
    if (n == 0) {
        return 0;
    } else {
        return 1.0/(n*(n+2)) + ser(n-1);
    }
}

int main() {
    cout << ser(n: 5);
    return 0;}