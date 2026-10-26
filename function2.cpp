# include <iostream>

double square(double input);
double cube(double input);



int main(){
     double input = 8.0;
     double area = square( input );
     double volume =cube( input ) ;

     std::cout<<"Area is :"<<area<< "cm^2\n";
     std::cout<<"Cubic is :"<<volume<< "cm^3\n";

     return 0;




}

double square(double input){
    return input*input;

}
double cube (double input){
    return input*input*input;

}