#include <iostream>

using namespace std;

int main() {

    int num1, num2, yaksu, baesu;

    cin >> num1 >> num2;

    int max = num1 > num2 ? num2 : num1;
    int min = num1 < num2 ? num2 : num1;


    //최대 공약수
    for (int i = min; i >= 1; i--) {
        if (!(num1 % i) && !(num2 % i)) {
            cout << i << "\n";
            break;
        }
    }

    //최소 공배수
    for (int i = 1;; ++i) {
        if ((max * i) % min == 0) {
            cout << max * i << "\n";
            break;
        }
    }

    return 0;
}