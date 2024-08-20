#include<iostream>

using namespace std;


class B {
private: int m1;
public: int m2;
protected: int m3;
public: 
B(){
cin >> m1; 
cin >> m2;
cin >> m3;
}
};
class D1: public B {
private: int x1;
public: int x2;
protected: int x3;
public:
void f1(){
cin >> x1;
cin >> x2;
cin >> x3;
}
void f2(){
//cin >> m1;
cin >> m2;
cin >> m3;
}
};

int main(){

D1 d1;
d1.f1 ();
d1.f2 ();
//d1.m1 = 1;
d1.m2 = 1;

    return 0;
}