﻿#include <iostream>
#include <vector>

int countDividers(int n) {
    int count = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            count++;
        }
    }
    return count;
}


int main() {


    return 0;
}
