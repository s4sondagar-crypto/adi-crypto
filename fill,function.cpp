# include <iostream>

int main(){

    const int size=99;
    std::string foods[size];

    fill(foods,foods+(size/3),"Dhokla");
    fill(foods+(size/3),foods+(size/3)*2,"khaman");
    fill(foods+(size/3)*2,foods+size,"vadapav");

    for(std::string food:foods){
        std::cout<<food<<'\n';
    }
    return 0;
}