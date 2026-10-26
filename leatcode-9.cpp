# include <iostream>

int main() {
    int x;
    std::cout<<"Enter the no:"<<'\n';
    std::cin>>x;

    if (x < 0) {
        return false;
    }
    int y =x;
    int reverse =0;


    while(x>0){
        reverse=(reverse*10)+(x%10);
        x/=10;
      
    }

     if(reverse==y){
            std::cout<<"palindrome"<<'\n';
        }
        else {
            std::cout<<"Not a palindrome";

        }

    return 0;
}