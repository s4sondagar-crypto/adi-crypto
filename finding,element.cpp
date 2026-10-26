# include<iostream>
using namespace std;
int find(int array[],int size,int element);

int main(){
int array[]={1,2,4,5,6,7,8,9};
int size=sizeof(array)/sizeof(array[0]);
int mynum;
int index;

cout<<"enter the number:";
cin>>mynum;
 index=find(array,size,mynum);
 
if(index != -1){
cout<<mynum <<" is at a index "<< index;
}else{
    cout<<mynum<< "is not in the array"<<'\n';
}
return 0;

}

int find(int array[],int size,int element){
    for(int i=0;i<size;i++){
        if(array[i]== element){
            return i;
        }
    }
    return -1;
}