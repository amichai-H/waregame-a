#pragma once
//
// Created by amichai hadad on 19/05/2020.
//
#include "Soldier.hpp"


class ParamedicCommander: public Soldier {
public:
    ParamedicCommander(int t) : Soldier(200,100,t,1,true){}
    virtual void attack(std::vector<std::vector<Soldier*>> &board, std::pair<int,int> source) override{

    }
            
    
};

