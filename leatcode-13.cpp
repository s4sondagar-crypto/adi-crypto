#include <iostream>
#include <string>

int value(char roman) {
    switch (roman) {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
        default: return 0;
    }
}

int main(){
    std::string roman;
    std::cout << "Enter the roman no. ";
    std::cin >> roman;

    int sum=0;
    for (std::size_t i = 0; i < roman.size(); ++i) {
        int current = value(roman[i]);
        if (i + 1 < roman.size() && current < value(roman[i + 1])) {
            sum -= current;
        } else {
            sum += current;
        }
    }

    std::cout << sum << '\n';
    return 0;
}