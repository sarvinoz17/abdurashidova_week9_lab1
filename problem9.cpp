#include <iostream>
using namespace std;

int multiply(int x, int y) {
    if (x == 0 || y == 0) {
        return 0;}
    if (y > 0) {
        return x + multiply(x, y - 1);
    } else {
        return -x + multiply(x, y + 1);}
}
int main() {
    int n1, n2;
    cout << "Enter two numbers: ";
    cin >> n1 >> n2;
    cout << "Product is: " << multiply(n1, n2) << endl;

    return 0;}