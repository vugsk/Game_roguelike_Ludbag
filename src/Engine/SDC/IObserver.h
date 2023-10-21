
#pragma once
#ifndef _IOBSERVER_H_
#define _IOBSERVER_H_

class IObserver {
public:
    virtual ~IObserver() = 0;

    virtual void Update() = 0;
};

#endif
