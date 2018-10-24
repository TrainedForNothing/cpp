#include<iostream>
using namespace std; 

template <class t1>

class bc{
protected:
t1 a,b;
public:
void seta(int c){

a=c;
}
void setb(int c){
b=c;}
t1 getb(){
return b;}
t1 geta(){
return a;}
};

int main(){
{
bc <int> o1;



o1.seta(10);


cout<<o1.geta()<<endl;
}
{
bc <double> o1;

o1.seta(5.443);


cout<<o1.geta()<<endl;}
{
bc <char> o1;

o1.seta('m');


cout<<o1.geta()<<endl;}

return 0;
}
