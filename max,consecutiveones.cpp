# include <iostream>

int main(){
    int arr[]={1,1,2,1,1,1,3,4};
    int n=sizeof(arr)/sizeof(arr[0]);

    int count=0;
   int max=0;
    
   for(int i=0;i<n;i++){
       if(arr[i]==1){
           count++;
           if(count>max){
           max=count;
       }
       }
       else{
           count=0;
       }
       
    
   }std::cout<<"Max consecutive ones are: "<<max;

}