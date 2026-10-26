# include <iostream>
int main(){

    std::string game;

    do{
        std::cout << "Want to play game? (yes/no): ";
        std::getline(std::cin, game);
    } while(game !="yes" && game!="no");
    return 0;

}