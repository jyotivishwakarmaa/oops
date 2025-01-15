//There are two types of polymorphism ....1 Run time   2 Compile time
//compile time...1 operator overloading   2 function overloading
//rum time...1 virtual function


//operator overloading 

#include<iostream>
using namespace std;

    class Number{

        int num;
        public:
        Number(int n=0){
            num=n;
        }
        void operator +(Number &obj){
            int ans;
            ans=num+obj.num;
            cout<<ans;
        }
    };

int main(){

    Number obj1(5);
    Number obj2(5);
    obj1+obj2;

    return 0;

}