
#pragma once

class IObserver {
public:
    virtual ~IObserver() = 0;

    virtual void Update() = 0;
};

