# include<iostream>

int main(){
    int temp;
    bool isGood=true;

    std::cout << "enter the temperature: ";
    std::cin>> temp;

    if(temp <=0 || temp >=30){
        std::cout << "the temperature is bad \n";
        isGood=false;
    }
    else{
        std::cout << "the temperature is good\n";
    }
    
    if(isGood){
        std::cout << "the temperature is  sunny\n";
    }
    else{
        std::cout << "the temperature is  cloudy\n";
    }
return 0;
}