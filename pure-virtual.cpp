#include<iostream>
using namespace std; 
class ab{
protected:
int a;
public:
void virtual seta(int b)=0;
int geta(){
return a;}

};



class bc : public ab{
protected:
int b;
public:
void seta(int c){
cout<<"\nClass bc Function\n";
a=c;
}
void setb(int c){
b=c;}
int getb(){
return b;}
int geta(){
return a;}
};

int main(){
ab *o1;

bc o2;

o1=&o2;


o1->seta(10);


cout<<o1->geta()<<endl;

return 0;
}
