# include <iostream>
# include <cmath>

int main(){
    double a;
    double b;
    double c;
    std::cout<<"enter the value of a : ";
    std::cin>>a;
    std::cout<<"enter the value of b : ";
    std::cin>>b;

    c = sqrt(a*a + b*b); ///to find hypotenuse of a right angle triangle ///
    std::cout<<"side c is :"<<c;
    return 0;
}