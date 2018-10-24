#include<iostream>
using namespace std; 

template <class t1,class t2>

t1 fun(t1 a,t2 b){
return a+b;
}


int main(){
cout<<fun(12.33,5);
return 0;
}
