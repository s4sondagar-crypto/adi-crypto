# include <iostream>
int main(){
    double a =4;
    double b = 5;
    double z = std::min(a,b); 
    std::cout<<"minimum value is : "<<z<< '\n';
    z = std::max(a,b); ///to find maximum value ///
    std::cout<<"maximum value is : "<<z;
    return 0;
}