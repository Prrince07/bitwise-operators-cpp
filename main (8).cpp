#include <iostream>
using namespace std;

int main() {
    int a = 12;   
    int b = 10;   
    int result = a & b;

    cout << "a = " << a << " (binary 1100)" << endl;
    cout << "b = " << b << " (binary 1010)" << endl;
    cout << "a & b = " << result << " (binary 1000)" << endl;

    return 0;
}
