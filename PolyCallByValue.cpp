//call by value

#include<iostream>
using namespace std;

void updateValue(int a, int b){
    a=a+1;
    b=b+1;
    cout<<"a : "<<a<<endl<<"b : "<<b<<endl;
};

int main(){

    int num1 = 10, num2 = 20;
      updateValue(num1, num2);
      cout<<"main num1 = "<<num1<<endl<<"main num2 = "<<num2;

      return 0;

}