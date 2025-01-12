//Hybrid

#include<iostream>
using namespace std;

class Teacher{

    public:
    Teacher(){
        cout<<"Teacher";
    }

};

    class Artist: public Teacher{
        public:

        Artist(){
            cout<<"Artist";
        }
    };

    class Person{

        public:
          Person(){
            cout<<"Person";
        }
    };

    class Base: public Person, public Artist{

        public:
       Base(){

            cout<<"All";
        }
            
    };

    int main(){

        Base b;
     

    }
