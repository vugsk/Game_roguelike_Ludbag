
#pragma once
#ifndef _ISUBJECT_H_
#define _ISUBJECT_H_

#include "IObserver.h"

class ISubject {
public:
    virtual ~ISubject() = 0;

    virtual void Attach(IObserver *observer) = 0;
    virtual void Detach(IObserver *observer) = 0;
    virtual void Notify() = 0;
};

#endif
