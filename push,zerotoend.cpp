# include<iostream>

int main(){
    int arr[]={1,2,0,4,0,5,0,7};
    int n=sizeof(arr)/sizeof(arr[0]);

    int j=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            arr[j]=arr[i];
            j++;
        }
    }
    // which is used to fill the remaining elements with 0//
    while(j<n){
        arr[j]=0;
        j++;
    }

  

    for(int i=0;i<n;i++){
        std::cout<<arr[i]<<" ";
    }
    return 0;
}