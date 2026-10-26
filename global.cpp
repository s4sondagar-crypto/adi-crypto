# include <iostream>


int myNum=3;

void printmyNum();


int main(){

    int myNum=1 ;
    printmyNum();
    std::cout<< ::myNum <<'\n';   // ::myNum is for global variable call//
        return 0;                  //if you want to call myNum=2 then pass argument in the 
                                    //  funtion //

}

void printmyNum(){
   
    int myNum =2;
    std::cout<< ::myNum<<'\n';
     
}