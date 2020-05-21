#pragma once

//
// Created by amichai hadad on 19/05/2020.
//

#include <vector>
#include <stdexcept>
#include <iostream>

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
    virtual void restorlife() = 0 ;
    void print_board(std::vector<std::vector<Soldier*>> &board,std::pair<int,int> source){
    for(int i=0; i<board.size();i++){
        for(int j=0; j< board.size();j++){
            if( i == source.first && j == source.second){
                    std::cout << "||" << "memememe";
            }
            else if (board[i][j]==0)
            {
                std::cout << "||" << "00000000";
            }
            else
            {
                std::cout << "||" << board[i][j];
            }
            
            
        }
        std::cout << "||" << std::endl;
    }
    std::cout << "" << std::endl; 
}
    
};


