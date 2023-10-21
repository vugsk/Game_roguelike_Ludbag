
#pragma once
#ifndef _IPLAYER_H_
#define _IPLAYER_H_

#include <SDC/system.h>
#include <Object/Items/IItem.h>

class IPlayer_V2_TEST {
public:
    IPlayer_V2_TEST(const IPlayer_V2_TEST &) = delete;
    IPlayer_V2_TEST(IPlayer_V2_TEST &&) = delete;
    IPlayer_V2_TEST &operator=(const IPlayer_V2_TEST &) = delete;
    IPlayer_V2_TEST &operator=(IPlayer_V2_TEST &&) = delete;
    IPlayer_V2_TEST() = default;
    virtual ~IPlayer_V2_TEST() = 0;

    virtual void setName(const string name) = 0;
    virtual void setSpecies(const string species) = 0;
    virtual void setClass(const string Class) = 0;
    virtual void setTitle(const string title) = 0;
    virtual void setGender(const string gender) = 0;
    virtual void setMP(const int mp) = 0;
    virtual void setProtection(const int protection) = 0;
    virtual void setHp(const int hp) = 0;
    virtual void setDmg(const int dmg) = 0;
    virtual void setLvl(const int lvl) = 0;
    virtual void setExp(const int exp) = 0;
    virtual void setStrong(const int strong) = 0;
    virtual void setPower(const int power) = 0;

    virtual string getName() = 0;
    virtual string getSpecies() = 0;
    virtual string getClass() = 0;
    virtual string getTitle() = 0;
    virtual string getGender() = 0;
    virtual int getMP() = 0;
    virtual int getProtection() = 0;
    virtual int getHp() = 0;
    virtual int getDmg() = 0;
    virtual int getLvl() = 0;
    virtual int getExp() = 0;
    virtual int getStrong() = 0;
    virtual int getPower() = 0;
    
    virtual IItem* getItems(const int index) = 0;
    virtual vector<IItem*> getItems() = 0;
    
    virtual IItem* getInventory(const int index1, const int index2) = 0;
    virtual vector<IItem*> getInventory(const int index) = 0;
    virtual vector<vector<IItem*>> getInventory() = 0;
    

    virtual void setItems(vector<IItem*> items) = 0;
    virtual void setInventory(vector<vector<IItem*>> inventory) = 0;

};

class IPlayer : public IPlayer_V2_TEST {
public:
    IPlayer(const IPlayer &) = delete;
    IPlayer(IPlayer &&) = delete;
    IPlayer &operator=(const IPlayer &) = delete;
    IPlayer &operator=(IPlayer &&) = delete;
    IPlayer() = default;
    virtual ~IPlayer() = 0;

    virtual void addInventory(IItem *item) = 0;

    virtual void move(const int choice, const vector_str map) = 0;
    virtual void spawn(const vector_str map) = 0;
    virtual int createPlayer(IPlayer *&player) = 0;
    virtual int menuPlayer(IPlayer *&player) = 0;
};



#endif
