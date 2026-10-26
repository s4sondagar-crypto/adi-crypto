# include <iostream>

int main(){
    std::string name;
    std::cout << "enter your name: ";
    std::getline(std::cin, name);
                                   ////////////////
    std:: cout << name.erase(0,3);///  0 to <=n///
                                  ///////////////
    return 0; }