//
// Created by Georg Rokita on 01.04.16.
//

#include "CList.h"

CList::CList() {
    startPtr = nullptr;

}

CList::~CList() {

}

void CList::setStart(CPunkt *_ptr) {
    startPtr = _ptr;
}

CPunkt *CList::getStartPtr() {
    return startPtr;
}
