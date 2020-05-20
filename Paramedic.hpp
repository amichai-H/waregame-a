#pragma once
//
// Created by amichai hadad on 19/05/2020.
//
#include "Soldier.hpp"


class Paramedic: public Soldier {
public:
    Paramedic(int t) : Soldier(100,50,t,1,false){}
    virtual void attack(std::vector<std::vector<Soldier*>> &board, std::pair<int,int> source) override{

    }
            
    
};
