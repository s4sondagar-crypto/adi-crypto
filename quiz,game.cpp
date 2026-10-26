# include <iostream>

int main(){
    
    std::string questions[]={{"What year c++ invented?:"},{"Who invented c++?"},{"What is the predecessor in c++?"},{"Is Earth is flat?"}};

    std::string options[][4]={{"A.1935" ,"B.1969" ,"C.1975" ,"D.1989"},
                             {"A.Guido rao vamen" ,"B.Bjarne stroustap", "C.john carter", "d.Mark carter"},
                            {"A. C", "B C++",  "C C--" , "D B++"},
                            {"A. Yes", "B. No" ,"C. not worthy",   "D.why this ?"}};

    char ans[]={'C','B','A','B'};
    int size=sizeof(questions)/sizeof(questions[0]);
    char guess;
    int score=0;

    for( int i=0;i<size;i++){
        std::cout<<"*******************************\n";
        std::cout<<questions[i]<<'\n';
        std::cout<<"*******************************\n";

        for(int j=0;j<sizeof(options[i])/sizeof(options[i][0]);j++){
            std::cout<<options[i][j]<<'\n';
        }

        std::cin>>guess;
        guess=toupper(guess);

        if(guess==ans[i]){
            std::cout<<"CORRECT!"<<'\n';
            score++;
        }
        else{
            std::cout<<"WRONG!"<<'\n';
            std::cout<<"Answer :"<<ans[i]<<'\n';
        }
    }
    std::cout<<"*************************************\n";
    std::cout<<"*              RESULTS              *\n";
    std::cout<<"*************************************\n";
    std::cout<<"CORRECT GUESSES :"<< score<<'\n';
    std::cout<<"# of questions :"<<size<<'\n';
    std::cout<<"SCORE:"<<(score/(double)size)*100<<'\n'; 
    return 0;


}