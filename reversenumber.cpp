#include <iostream>
using namespace std;

    int main(){
        int number, revnum=0;
        cout << "number: ";
        cin >> number;

    while(number!=0){
        revnum *= 10;
        int lastdigit = number % 10;
        revnum +=lastdigit;
    }
        

        system("pause>0");
    }
