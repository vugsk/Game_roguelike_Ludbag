
#pragma once
#ifndef _PLAYER_H_
#define _PLAYER_H_

#include "IPlayer.h"
#include "menu_player.h"

#include "unit_exists.h"


class Player : public IPlayer {
private:
    static Player *pointerInstance;

    const int SIZE_ITEMS = 6; //? or 7
    const int X_INVENTORY = 3;
    const int Y_INVENTORY = 10;

    Player();

    UnitExists unit;
    string Class;
    string title;
    int mp;
    int protection;

    // vector<IItem*> items;
    // vector<vector<IItem*>> inventory;

    MenuPlayer* menuPl;

public:
    Player(const Player &) = delete;
    Player(Player &&) = delete;
    Player &operator=(const Player &) = delete;
    Player &operator=(Player &&) = delete;
    ~Player() override;

    static Player* getInstance();

    // IItem* getItems(const int index) override { return items[index]; }
    // vector<IItem*> getItems() override { return items; }
    
    // IItem* getInventory(const int index1, const int index2) override { return inventory[index1][index2]; }
    // vector<IItem*> getInventory(const int index) override { return inventory[index]; }
    // vector<vector<IItem*>> getInventory() override { return inventory; }

    // void setItems(vector<IItem*> items) override { this->items = items; }
    // void setInventory(vector<vector<IItem*>> inventory) override { this->inventory = inventory; }

    void addInventory(IItem* item) override;

    void setName(const string name) override { unit.name = name; }
    void setSpecies(const string species) override { unit.species = species; }
    void setClass(const string Class) override { this->Class = Class; }
    void setTitle(const string title) override { this->title = title; }
    void setGender(const string gender) override { unit.gender = gender; }
    void setMP(const int mp) override { this->mp = mp; }
    void setProtection(const int protection) override { this->protection = protection; }
    void setHp(const int hp) override { unit.hp = hp; }
    void setDmg(const int dmg) override { unit.dmg = dmg; }
    void setLvl(const int lvl) override { unit.lvl = lvl; }
    void setExp(const int exp) override { unit.exp = exp; }
    void setStrong(const int strong) override { unit.strong = strong; }
    void setPower(const int power) override { unit.power = power; }


    string getName() override { return unit.name; }
    string getSpecies() override { return unit.species; }
    string getClass() override { return Class; }
    string getTitle() override { return title; }
    string getGender() override { return unit.gender; }
    int getMP() override { return mp; }
    int getProtection() override { return protection; }
    int getHp() override { return unit.hp; }
    int getDmg() override { return unit.dmg; }
    int getLvl() override { return unit.lvl; }
    int getExp() override { return unit.exp; }
    int getStrong() override { return unit.strong; }
    int getPower() override { return unit.power; }


    // void move(const int choice, const vector_str map) override;
    // void spawn(const vector_str map) override;
    // int createPlayer(IPlayer *&player) override;
    // int menuPlayer(IPlayer *&player) override;

};

#endif
