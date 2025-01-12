
//single inheritance
#include<iostream>
using namespace std;

class Person{

    public:
    string name ="Jyoti";
    int age=23;

};

    class Student:public Person{
        public:

        void show(){
            cout<<name<<endl<<age;
        }
    };

    int main(){

        Student obj;
        obj.show();
    }