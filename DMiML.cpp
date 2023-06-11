#include <iostream>
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

struct Result {
    int attempts;
    int odds;
};

Result diceRoll(int u, std::vector<int>& results, bool unique, int start = 1) {
    const int maxDepth = u;

    if (results.size() == maxDepth) {
        int mult = 1;
        for (int result : results) {
            mult *= result;
        }
        int odds = countDividers(mult) % 2;
        return { 1, odds };
    }

    Result totalOdd = { 0, 0 };
    int from = (unique) ? (start) : 1;
    for (int i = from; i <= 6; i++) {
        results.push_back(i);
        Result roll = diceRoll(maxDepth, results, unique, i);
        totalOdd.odds += roll.odds;
        totalOdd.attempts += roll.attempts;
        results.pop_back();
    }

    return totalOdd;
}

int main() {
    std::vector<int> results;
    bool unique = false;
    Result result;
    for (int u = 1; u <= 7; ++u) {
        result = diceRoll(u, results, unique);
        std::cout << u << std::endl;
        std::cout << "Attempts: " << result.attempts << std::endl;
        std::cout << "Odds: " << result.odds << std::endl;
    }
    return 0;
}
