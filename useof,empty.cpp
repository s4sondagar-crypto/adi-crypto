# include<iostream>

int main(){
std::string foods[5];
int size= sizeof(foods)/sizeof(foods[0]);
std::string temp;

for(int i=0;i<size;i++){
    std::cout<<"enter the foods you like to or press 'q' for quit"<<i+1<<'\n';
    std::getline(std::cin,temp);

    if(temp == "q"){
        break;
    }else{
        foods[i]==temp;
    }

    
}
std::cout<<"you liked foods are"<<'\n';

for(std::string food:foods){
    std::cout<<food<<'\n';
}


return 0;
}