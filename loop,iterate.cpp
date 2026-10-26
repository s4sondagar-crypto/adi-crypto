# include<iostream>

int main(){
    char arr[]={'a','d','i','t','y'};
    for(int i =0;i <sizeof(arr)/sizeof(char);i++){
        std::cout<<arr[i]<<'\n';
    }
}//Use sizeof(arr)/sizeof(char) insteed of the i<n,,//
//its better iteration than normal one//