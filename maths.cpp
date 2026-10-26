# include <iostream>
# include <cmath>

int main(){
    double z =3;
    double y = 4;
    double x =5;
    double w = 6;
    double a=7;
    double b=9.10;


    z= pow(3,4); ///to find power of a number ///
    y= sqrt(4); ///to find square root of a number ///
    x= cbrt(5); ///to find cube root of a number ///
    w= round(6.5); ///to round off a number ///
    a= ceil(7.5); ///to round up a number ///
    b= floor(9.10); ///to round down a number ///

    std::cout<<"power of a number is : "<<z<< '\n';
    std::cout<<"square root of a number is : "<<y<< '\n';
    std::cout<<"cube root of a number is : "<<x<< '\n';
    std::cout<<"round off a number is : "<<w<< '\n';
    std::cout<<"round up a number is : "<<a<< '\n';
    std::cout<<"round down a number is : "<<b<< '\n';   
    
 return 0;
}