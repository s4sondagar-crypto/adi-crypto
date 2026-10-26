# include <iostream>
# include <cmath>

int main(){
    int a,b;

  std::cout << "Enter a number: ";
  std::cin>> a;
  std::cout << "Enter another number: ";
  std::cin>> b;

  char p;

    std::cout << "Enter an operator (+, -, *, /): ";
    std::cin >> p;

    switch(p) {
        case '+':
            std::cout << "Result: " << a + b << std::endl;
            break;
        case '-':
            std::cout << "Result: " << a - b << std::endl;
            break;
        case '*':
            std::cout << "Result: " << a * b << std::endl;
            break;
        case '/':
            if (b != 0) {
                std::cout << "Result: " << a / b << std::endl;
            } else {
                std::cout << "Error: Division by zero!" << std::endl;
            }
            break;
        default:
            std::cout << "Invalid operator!" << std::endl;
    }



}