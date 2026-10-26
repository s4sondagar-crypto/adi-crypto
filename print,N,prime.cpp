#include <iostream>
#include <vector>
using namespace std;

// Function to generate and print the first N prime numbers
void printFirstNPrimes(int N) {
    if (N <= 0) return;

    vector<int> primes;
    
    // 2 is the first prime number
    primes.push_back(2); 
    
    int num = 3; 
    
    // Keep searching until the vector contains N prime numbers
    while (primes.size() < N) {
        // Use an integer flag: 1 means prime, 0 means not prime
        int is_prime = 1; 
        
        // Check divisibility against already found primes
        for (int i = 0; primes[i] * primes[i] <= num; i++) {
            if (num % primes[i] == 0) {
                is_prime = 0; // Found a factor, not prime
                break;
            }
        }
        
        // If flag is still 1, the number is prime
        if (is_prime == 1) {
            primes.push_back(num);
        }
        
        // Skip even numbers
        num += 2; 
    }

    // Print the prime numbers
    for (int i = 0; i < primes.size(); i++) {
        cout << primes[i] << " ";
    }
    cout << endl;
}

int main() {
    int n = 10; 
    cout << "The first " << n << " prime numbers are: " << endl;
    printFirstNPrimes(n);
    
    return 0;
}
