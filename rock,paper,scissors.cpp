# include <iostream>
# include <ctime>

char getUserchoice();
char getComputerchoice();
void showUser(char choice);
void showWinner(char computer, char player);

int main(){
    char player;
    char computer;


    player=getUserchoice();
    std::cout<<"Your choice :";
    showUser(player);
    

    computer=getComputerchoice();
    std::cout<<"\nComputer's choice :";
    showUser(computer);
    showWinner(computer,player);

    return 0;
  
}

char getUserchoice(){
    char player;
    std::cout<<"***************************************\n";
    std::cout<<"This a rock ,paper and scissors game !\n";

    do{
        std::cout<<"enter from the following\n";
        std::cout<<"'r' for rock!\n";
        std::cout<<"'p' for paper!\n";
        std::cout<<"'s' for scissors!\n";
        std::cout<<"************************************\n";

        std::cin>>player;

    }while(player != 'r' && player != 'p' && player != 's');

    return player;


    
}
char getComputerchoice(){
    srand(time(NULL));
    int num = rand()%3+1;//choose the num,between 1 to 3;
    switch(num){
        case 1: return 'r';
        case 2: return 'p';
        case 3: return 's';
    }

    return 0;

};
void showUser(char choice){
    switch(choice){
        case 'r': std::cout<<"Rock!";
        break;
        case 'p': std::cout<<"Paper!";
        break;
        case 's': std::cout<<"Scissors!";
        break; 

}
};
void showWinner(char computer,char player){

    switch(player){
        case 'r': if(computer=='r'){
                  std::cout<<"\nIt's tie";
                  break;
                }
                  else if(computer=='p'){
                std::cout<<"\nyou lose";
                break;
                  }
                  else{
                std::cout<<"\nyou win";
                break;
                  }
        
    case 'p': if(computer=='r'){
                  std::cout<<"\nyou win";
                  break;
                }
                  else if(computer=='p'){
                std::cout<<"\nIt's tie";
                break;
                  }
                  else{
                std::cout<<"\nyou lose";
                break;
                  }
    case 's': if(computer=='r'){
                  std::cout<<"\nyou lose";
                  break;
                }
                  else if(computer=='p'){
                std::cout<<"\nyou win";
                break;
                  }
                  else{
                std::cout<<"\nIt's tie";
                break;
                  }
        
        
    };
};