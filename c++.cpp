#include<iostream>
#include<map>

using namespace std;

class TextBox
{
private:
    string value;
public:
    TextBox(string data):value{data}{}

    void show(){
        cout<<value<<endl;
    }
    ~TextBox(){};
};




int main(){

//   TextBox *t = new TextBox("hello world");
//   t->show();

//   TextBox *p = new TextBox(*t);

//   p->show();

// delete t;
//     return 0;

int m = 6;
int n = 9;

int *ptr = &m;
int **ptrPtrInt = &ptr;

 cout<< *ptr <<endl;
 cout<< *(*ptrPtrInt) <<endl;
}