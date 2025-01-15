
//function overloading 

#include<iostream>
using namespace std;

class Number{
    public:
    void show(){
        cout<<"Hello";
    }

    public:
    void show(int n){
        cout<<n;
    }

    public:
    void show(int a, int b){
        cout<<a+b;
    }

     public:
    void show(int a, int b, int c){
        cout<<a*b*c;
    }
};

int main(){

    Number obj;
    obj.show();
        cout<<endl;
    obj.show(5);
        cout<<endl;
    obj.show(3,3);
        cout<<endl;
    obj.show(2,2,2);
}
