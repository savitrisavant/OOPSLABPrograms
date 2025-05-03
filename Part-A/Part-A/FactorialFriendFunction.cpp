#include <iostream>
using namespace std;

class Fact {
private:
    int number;
public:
    Fact(int n) : number(n) {}


    friend int calFac(Fact f);
};


int calFac(Fact f) {
    int fact = 1;
    for (int i = 1; i <= f.number; ++i) {
        fact *= i;
    }
    return fact;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    Fact f(num);
    cout << "Factorial of " << num << " is " << calFac(f) << endl;

    return 0;
}

