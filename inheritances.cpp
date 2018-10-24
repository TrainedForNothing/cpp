#include<iostream>
using namespace std; 
class ab{
private:
int pri1;
protected:
int pro1;
public:
int pub1;
void set_pri1(int a){
pri1=a;}
int get_pri1(){ return pri1;}

void set_pro1(int a){
pro1=a;}
int get_pro1() {return pro1;}
};



class bc : public ab{      //public inheritance
//private arn't accessable
//protected will be protected
//public will be public

private:
int pri2;
protected:
int pro2;
public:
int pub2;
void set_pri2(int a){
pri2=a;}
int get_pri2(){ return pri2;
}
void set_pro2(int a){
pro2=a;}
int get_pro(){ return pro2;
}

};




class cd : protected bc{      //protected inheritance
//private arn't accessable
//protected will be protected
//public will also becomes protected
private:
int pri3;
protected:
int pro3;
public:
int pub3;
void set_pri3(int a){
pri3=a;}
int get_pri3(){ return pri3;}

void set_pro3(int a){
pro3=a;}
int get_pro3(){ return pro3;}


};










class de : protected cd{      //private inheritance
//private arn't accessable
//protected will also become private
//public will also becomes private
private:
int pri4;
protected:
int pro4;
public:
int pub4;
void set_pri4(int a){
pri4=a;}
int get_pri4(){ return pri4;}

void set_pro4(int a){
pro4=a;}
int get_pro4(){ return pro4;}


};













int main(){
ab a;
a.set_pri1(10);
cout<<a.get_pri1()<<endl;

bc b;

b.pub1=12;
cout<<b.pub1<<endl;

//b.set_pri1(10);                        //accessable bcz of public inheritance
//cout<<b.get_pri1()<<endl;

b.set_pri2(10);
cout<<b.get_pri2()<<endl;



cd c;

//c.pub1=12;                     //not accesseable bcz it became protected
//cout<<b.pub1<<endl;

//c.set_pri1(10);                        //not accesseable bcz it became protected
//cout<<b.get_pri1()<<endl;

c.set_pri3(10);
cout<<c.get_pri3()<<endl;



de d;

//d.pub1=12;                     //not accesseable bcz it became private
//cout<<d.pub1<<endl;

//d.set_pri1(10);                       //not accesseable bcz it became private
//cout<<d.get_pri1()<<endl;

//d.pub2=12;                     //not accesseable bcz it became private
//cout<<d.pub2<<endl;

//d.set_pri2(10);                       //not accesseable bcz it became private
//cout<<d.get_pri2()<<endl;

d.set_pri4(10);
cout<<d.get_pri4()<<endl;




return 0;
}
