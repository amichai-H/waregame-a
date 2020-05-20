#pragma once
//
// Created by amichai hadad on 19/05/2020.
//
#include "Soldier.hpp"

class FootCommander: public Soldier {
public:
    FootCommander(int t) : Soldier(120,100,t,2,true){}
    virtual void attack(std::vector<std::vector<Soldier*>> &board, std::pair<int,int> source) override{

    }
    
};
