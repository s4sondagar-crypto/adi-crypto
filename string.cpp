# include <iostream>

int main(){
    std::string name;
    std::cout << "enter your name: ";
    std::getline(std::cin, name);
    
    name.length() <20 ?std::cout << "welcome "<< name<< '\n': std::cout<< "your name isnt to be 12 characters long\n";
    name.length();
    std::cout << "characters in your name are:"<< name.length() << '\n';
    return 0;
}