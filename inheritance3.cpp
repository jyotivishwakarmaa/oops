//Multiple inheritance

#include<iostream>
using namespace std;

class Teacher{

    public:
    string name ="Jyoti";
    int age=23;

};

    class Artist{
        public:

        int roll=100;
    };

    class Person: public Teacher, public Artist{

            public:
            void display(){

                cout<<name<<endl<<age<<endl<<roll;
            }
            
    };

    int main(){

        Person obj;
        obj.display();

    }
