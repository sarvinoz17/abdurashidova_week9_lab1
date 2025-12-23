#include <iostream>
using namespace std;

double series_sum(int n) {
    if (n == 1) {
        return 1.0; 
    } else {
        return 1.0 / (n * n) + series_sum(n - 1);}
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    double result = series_sum(n);
    cout << "Sum of series up to 1/" << n << "^2 is " << result << endl;

    return 0;}