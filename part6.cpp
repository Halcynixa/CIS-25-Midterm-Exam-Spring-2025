#include<iostream>
using namespace std;

int main() {
    int number = 10;
    if (number == 20) { // changed = to ==. it's trying to do a comparison operation with a single =, which is meant for assigning variables. == is the comparison operator
        cout << "Number is 20" << endl;
    }
    else {
        cout << "Number is not 20" << endl;
    }

    for (int i = 0; i <= 5; i++) { // added brackets to clearly declare what to loop, removed the unneeded semicolon as a result since it would cause a syntax error
        cout << i << endl;
    }
    return 0;
}
