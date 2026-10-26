# include<iostream>
# include<vector>///Vector in cpp is used as Dynamic Array///
using namespace std;
int main(){
    vector<char>c={'a','t','i'};

    c.push_back('k');///append a number to back
    c.insert(c.begin()+2,'z');///to insert the value at any indexes you want
    for(char x:c){
        cout<<x;

    }//loop is for-eacch loop to print the array

    cout<<"\nusing the array operator[]:"<<c[1];///to access the number by array
    cout<<"\nusing at: "<<c.at(2);///to access the number by at

    return 0;
    
}