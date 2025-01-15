#include<iostream>
using namespace std;

    class A{
        public:
        virtual void show(){
            cout<<"class A\n";
        }
 };

  class B: virtual public A{
        public:
        void show(){
            cout<<"class B\n";
        }
 };

  class C: public A  {
        public:
        virtual void show(){
            cout<<"class A\n";
        }
 };

   class D: public B, public C{

        public:
        void show(){
            cout<<"Class D\n";
        }
   };


    int main(){

        A *obj;
        C obj3;
        obj=&obj3;
        obj->show();

        return 0;

    }