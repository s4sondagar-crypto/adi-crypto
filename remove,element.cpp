# include <iostream>
# include <vector>
using namespace std;
int main(){
    vector<int>v={1,0,2,2,4,3,5,3};

        
        v.erase(v.begin(),v.end(),3);
        cout<<v;
        return 0;
}

        

