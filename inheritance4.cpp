//Herarical 

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

    class Person: public Teacher{

            public:
           Person(){

                cout<<"Person";
            }
            
    };

    int main(){

      Person obj;
      Artist obj1;

    }
