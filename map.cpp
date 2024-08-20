#include<iostream>
#include<map>

using namespace std;


int main(){

   map<int , string> name;

   name[1] = "Haris";
   name[2] = "Umar";
   name[3] = "Ahmed";

   for (auto &pair : name)
   {
   // cout<<pair.first<<" "<< pair.second<<endl;
   }
   
   string arr[] = {"Hello", "world"};

   cout<<arr[1][0];
    return 0;
}