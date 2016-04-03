//
// Created by Georg Rokita on 01.04.16.
//

#ifndef CHANDEDLIST_CLIST_H
#define CHANDEDLIST_CLIST_H

#include "Punkt.h"

class CList {
    CPunkt *startPtr;

public:
    CList();
    ~CList();

    void setStart(CPunkt * _ptr);
    CPunkt * getStartPtr();

};


#endif //CHANDEDLIST_CLIST_H
