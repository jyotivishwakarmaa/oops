#include<iostream>
using namespace std;

class Bank{

    public: 
    static int amount;
    void showAmount(int x){

        amount = amount-x;
        cout<<"Amount : "<<amount<<endl;
    }
};

    int Bank::amount = 10;

    int main(){

        Bank obj1;
        obj1.showAmount(6);
        cout<<endl;

        Bank obj2;
        obj2.showAmount(2);
    }