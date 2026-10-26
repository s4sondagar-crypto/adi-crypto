# include <iostream>
using namespace std;
struct cars{
    string model;
    int year;
    string color;

};
void print(cars car1,cars car2);
void print(cars car1, cars car2){
    cout<<car1.model<<" "<<car1.year<<" "<<car1.color<<endl;
    cout<<car2.model<<" "<<car2.year<<" "<<car2.color<<endl;
}

int main(){
    cars car1;
    cars car2;

    car1.model ="buggati\n";
    car1.year=2021;
    car1.color="red\n";

    car2.model ="ferrari\n";
    car2.year = 2023;
    car2.color = "white\n";

    print(car1,car2);
    
    return 0;
}