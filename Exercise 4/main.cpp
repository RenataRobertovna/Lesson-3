#include <iostream>
using namespace std;

int main() {
    int number = 0;
    cout << "Enter number ->";
    cin >> number;
    if (number % 2 == 0)
    {
        number *= 3;
    } else {
        number /= 2;
    }
    cout << number << endl;
}
