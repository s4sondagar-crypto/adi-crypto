# include<iostream>
 

void happyBirthday(std::string name, int age);

int main(){
    
std::string name = "aditya";
int age = 20;
happyBirthday(name,age);
return 0;

}
void happyBirthday(std::string name, int age){ 

    std::cout << "Happy Birthday, " << name << "!" << std::endl;
    std::cout << "you are " << age << " years old!" << std::endl;

}