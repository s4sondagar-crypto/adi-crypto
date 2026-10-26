# include <iostream>
# include<vector>



int  main(){
  std::vector<int>repeat;
    std::vector<int> arr={2,2,2,3,3,4,4,6,6,6,6,7};
    std::vector<int>::size_type i=1;
      
    while(i<arr.size()){
        if(repeat.empty()||arr[i]!=repeat.back()){
            
        repeat.push_back(arr[i]);
          
          
        }
        
        i++;
        
    }
    for(int x:repeat){
    std::cout<<x;
    }
    
    return 0;
    
    
    
}