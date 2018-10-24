#include<iostream>
using namespace std; 
template <class t1>
class ab{
protected:
t1 a;
public:
void virtual seta(int b)=0;
t1 geta(){
return a;}

};

template <class t1>

class bc : public ab{
protected:
t1 b;
public:
void seta(int c){
cout<<"\nClass bc Function\n";
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
ab <int> o;
bc <int> o1;



o1.seta(10);


cout<<o1.geta()<<endl;
/*
o1.seta< double>(5.443);


cout<<o1.geta()<<endl;

o1.seta< char>('m');


cout<<o1.geta()<<endl;
*/
return 0;
}
