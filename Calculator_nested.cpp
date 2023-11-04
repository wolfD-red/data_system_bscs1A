#include <iostream>

using namespace std;

int main (){

    int fnum;
    int snum;
    char op;
    
    cout << "Enter First Number: ";
    cin >> fnum;
    cout << "Enter Operator:";
    cin >> op;
    cout << "Enter Second Number: ";
    cin >> snum;

    if (op == '+'){
       cout << fnum + snum;
    }else if (op == '-'){
        cout << fnum - snum;
    }else if (op == '*'){
        cout << fnum * snum;
    }else if (op == '/'){  
        if (snum == 0){
            cout << "Math ERROR";
        }else{
            cout << fnum / snum;}
    }else{
        cout << "Invalid Operator";
    }
    
    return 0;
}