#include<iostream>
using namespace std; 
int main(){
double a,b;

cout<<"Enter Two Integer To Divide First With Second :";

cin>>a>>b;
try{
    if(b==0){
     throw 11534;
    }
cout<<"\nANS IS : "<<a/b<<endl;

}catch(...){
cout<<"Cannot Divide By 0 ERROR:"<<a<<endl;
}


   

return 0;
}
