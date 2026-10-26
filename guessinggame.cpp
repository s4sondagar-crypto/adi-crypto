# include<iostream>
# include<ctime>
#include<cstdlib>

int main(){
     int num,guess,tries =0;

     srand(time(NULL));
     std::cout << "Welcome to the Guessing Game!" << std::endl;
        num = rand() % 100 + 1; // Generates a random number between 1 and 100
        

        do{
            std::cout << "Enter your guess (between 1 and 100): ";
            std::cin >> guess;
            tries++;

            if(guess > num){
                std::cout << "Too high! Try again." << std::endl;
            }
            else if(guess < num){
                std::cout << "Too low! Try again." << std::endl;
            }
            else{
                std::cout << "Congratulations! You guessed the number in " << tries << " tries." << std::endl;
            }
        }

        while(guess != num);
        return 0;
    }