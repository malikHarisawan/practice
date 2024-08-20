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

class D3: private B {
private: int y1;
public: int y2;
protected: int y3;
public:
void g1(){
cin >> y1;
cin >> y2;
cin >> y3;
}
void g2(){
//cin >> m1;
cin >> m2;
cin >> m3;
}
};
class D2: protected D1 {
private: int y1;
public: int y2;
protected: int y3;
public:
void h1() {
g1();
g2();
f1();
f2();
}
protected:
void h2() {
g1();
g2();
f1();
f2();
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
