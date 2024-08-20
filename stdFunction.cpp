#include<iostream>
#include<map>
#include<vector>

#include<functional>
using namespace std;

void func(std::function<void(int)> boo){
    
    boo(5);
}
void foo(int x){

    cout<<x<<endl;
}
class Hello {
  public:
    void operator()(int times){
      for (int i = 1; i <= times; i++)
        cout << "ui!" << endl;
      }
};
int main(){

std::vector<std::function<void(int)>> vf;
vf.push_back([](int x){cout<<"X: " << x << std::endl;});
vf.push_back([](int y){cout<<"Y: " << y << std::endl;});
vf.push_back([](int z){cout<<"Z: " << z << std::endl;});

for (auto& func : vf) {
    func(23); 
}
//functor
  // Hello h ;
  // func(h);

    //std::function<void()> f = [](){cout<<"HEllo from STD::Function";};

}