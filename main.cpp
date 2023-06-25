
#include <iostream>
#include "classTriangle.h"

using namespace std;

int main() {
    Triangle T1;
    T1.setX1(23);
    T1.setY3(92);

    Triangle T2(199, 1, 0, 1, 23,7);

    Triangle T3 = T1;
    T3.setY1(12);
    T3.setY2(40);

    T1.printTriangle("T1");
    ++T1;
    T1.printTriangle("T1");
    cout << endl;

    T2.printTriangle("T2");
    T2++;
    T2.printTriangle("T2");
    cout << endl;

    T3.printTriangle("T3");
    T3+=2.5;
    T3.printTriangle("T3");
    cout << endl;

    findMaxTriangle(T1, T2, T3);

    return 0;
}