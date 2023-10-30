#include "func.h"
#include <iostream>

using namespace std;

int main() {
    int start, end;

    std::cout << "Enter the start of the range: ";
    std::cin >> start;

    std::cout << "Enter the end of the range: ";
    std::cin >> end;

    std::vector<int> perfectNums = findPerfectNumbers(start, end);

    if (perfectNums.empty()) {
        std::cout << "No perfect numbers found in the range." << std::endl;
    }
    else {
        std::cout << "Perfect numbers in the range: ";
        for (int num : perfectNums) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}