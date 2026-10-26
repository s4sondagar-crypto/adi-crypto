# include <iostream>
# include <ctime>
int main(){
    
      srand(time(NULL));
      int random_number = rand() % 100 + 1; // Generates a random number between 1 and 100
    std::cout << "Random number: " << random_number << std::endl;
    return 0;

}