
#pragma once
#ifndef _IITEM_H_
#define _IITEM_H_

#include <string>

using std::string;

class IItem {
public:
    IItem(const IItem &) = delete;
    IItem(IItem &&) = delete;
    IItem &operator=(const IItem &) = delete;
    IItem &operator=(IItem &&) = delete;
    IItem() = default;
    virtual ~IItem() = 0;

    virtual string getId() = 0;
    virtual string getName() = 0;
    virtual string getDescription() = 0;
    virtual string getType() = 0;
    virtual string getRarity() = 0;
    virtual int getDamage() = 0;
    virtual string getView() = 0;

};


#endif
