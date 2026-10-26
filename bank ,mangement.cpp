 # include <iostream>
# include <iomanip> // to set precision to some no.//

void showBalance(double balance);
double deposit();
double withdraw(double balance);

int main(){
    double balance = 234;
    int choice = 0;

    do {
        std::cout << "##########################\n";
        std::cout << "Enter the choice :\n";
        std::cout << "##########################\n";
        std::cout << "1.Show Balance \n";
        std::cout << "2.Deposit Money \n";
        std::cout << "3.Withdraw Money \n";
        std::cout << "4.Exit\n";
        std::cin >> choice;

        switch (choice) {
            case 1:
                showBalance(balance);
                break;
            case 2:
                balance += deposit();
                break;
            case 3:
                balance -= withdraw(balance);
                break;
            case 4:
                std::cout << "Thanks for visiting !\n";
                break;
            default:
                std::cout << "Invalid choice\n";
        }
    } while (choice != 4);

    return 0;
}

void showBalance(double balance) {
    std::cout << "Your Balance is " << std::fixed << std::setprecision(2) << balance << '\n';
}

double deposit() {
    double amount = 0;
    std::cout << "Enter the amount to deposit: ";
    std::cin >> amount;

    if (amount < 0) {
        std::cout << "Invalid amount\n";
        return 0;
    }

    return amount;
}

double withdraw(double balance) {
    double amount = 0;
    std::cout << "Enter the amount to withdraw: ";
    std::cin >> amount;

    if (amount < 0 || amount > balance) {
        std::cout << "Invalid amount\n";
        return 0;
    }

    return amount;
}