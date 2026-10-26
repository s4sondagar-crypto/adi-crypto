# include <iostream>
# include <vector>
using namespace std;
int main(){
    vector<char>c={'a','d','i','t','y'};

    //for deleting  last element 'y';
    c.pop_back();
    for(char s:c){
      cout<<s;
    }
}