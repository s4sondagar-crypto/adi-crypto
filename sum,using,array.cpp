# include<iostream>

double getTotal(double num[],int size);

int main(){
    
    double num[]={45.05,8.0,9.06,34.00};
    int size=sizeof(num)/sizeof(double);

    double num1=getTotal(num,size);
    std::cout<<'$'<<num1;
    return 0;

}

double getTotal(double num[],int size){
double Total=0;
for(int i=0;i<size;i++){
    Total+=num[i];
   
}
 return Total;

}