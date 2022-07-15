#include <iostream>

using namespace std;

int height[9];

void sort() {
    for (int i = 0; i < 8; ++i) {
        for (int j = i + 1; j < 9; ++j) {
            if (height[i] > height[j]) {
                int tmp = height[i];
                height[i] = height[j];
                height[j] = tmp;
            }
        }
    }
}

int main() {

    int nonDwarfHeightSum = -100;

    for (int i = 0; i < 9; ++i) {
        cin >> height[i];
        nonDwarfHeightSum += height[i];
    }

    for (int i = 0; i < 8; ++i) {
        for (int j = i + 1; j < 9; ++j) {
            if (i != j && height[i] + height[j] == nonDwarfHeightSum) {
                height[i] = 100;
                height[j] = 100;
                sort();
                for (int i = 0; i < 7; ++i) {
                    cout << height[i] << "\n";
                }
                return 0;
            }
        }
    }
}