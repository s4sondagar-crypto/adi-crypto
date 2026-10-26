# include <iostream>

int main(){
    std::string name;
    std::cout << "enter your name: ";
    std::getline(std::cin, name);

    if(name.empty()){
        std::cout << "you didnt enter your name\n";
    }else{
        std::cout <<" hello "<< name << '\n';
    }
    return 0;
}