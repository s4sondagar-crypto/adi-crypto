# include <iostream>

std::string concatestring( std::string sec1, std::string sec2);

int main(){
    std::string firstname = "aditya";
    std::string lastname = "sondagar";

    std::string fullname = concatestring(firstname,lastname);

    std::cout <<"HELLO"<< fullname;
    return 0;

}

std::string concatestring( std::string sec1, std::string sec2){

    return sec1 + " " + sec2;
}