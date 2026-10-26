


#include <iostream>
using namespace std;

// Returns 1 if prime, 0 if not prime
int checkPrime(int n) {
    if (n <= 1) return 0;
    
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main() {
    int n = 30; 
    cout << "Prime numbers up to " << n << " are: " << endl;
    
    for (int i = 1; i <= n; i++) {
        if (checkPrime(i) == 1) {
            cout << i << " ";
        }
    }
    return 0;
}
