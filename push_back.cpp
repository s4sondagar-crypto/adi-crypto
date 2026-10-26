# include <iostream>
# include <vector>

using namespace std;
int main(){
    vector<int>i;

    for(int j=1;j<5;j++){
        i.push_back( j*10);
    }///print the array

    for(int x:i){
        cout<<x;

    }

    return 0;
}