#pragma once

//
// Created by amichai hadad on 19/05/2020.
//

#include <vector>
#include <stdexcept>

class Soldier{
public:
    int healthPoints;
    int dpa;
    int team;
    int type;
    bool commander;
    Soldier(int h, int d,int t, int ty, bool c){
        this->healthPoints = h;
        this->dpa = d;
        this->team = t;
        this->type = ty;
        this->commander=c;
    }
    virtual void attack(std::vector<std::vector<Soldier*>> &board, std::pair<int,int> source) = 0 ;

};

