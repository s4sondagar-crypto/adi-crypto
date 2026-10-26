# include <iostream>
int main(){
    std::string name;

    std::cout<<"enter your name : ";
    std::getline(std::cin,name); ///to have full name with spaces ///


    std::cout<<"hello,"<<name;
    return 0;
}