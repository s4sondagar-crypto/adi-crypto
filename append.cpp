# include <iostream>

int main(){
    std::string name;
    std::cout << "enter your name: ";
    std::getline(std::cin, name);


    name.append("@gmail.com");                 ///////////////////////////////////////////////////////////
    std::cout << "hello " << name ;////removes the content of the string and makes it empty////
                                   ///////////////////////////////////////////////////////////
    return 0;}