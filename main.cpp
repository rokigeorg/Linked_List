#include <iostream>
#include "CList.h"
#include "Punkt.h"

using namespace std;

int main() {

    CList punktList;

    CPunkt *p1Ptr = new CPunkt(2,3);
    CPunkt *p2Ptr = new CPunkt(5,3);
    CPunkt *p3Ptr = new CPunkt(6,3);

    double x,y;

    punktList.setStart(p1Ptr);
    p1Ptr->setNext(p2Ptr);

    x = p1Ptr->getX();
    y = p1Ptr->getY();

    cout << "1st Point:";
    cout << x;
    cout << ",";
    cout << y << endl;
    return 0;
}