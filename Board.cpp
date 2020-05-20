//
// Created by amichai hadad on 19/05/2020.
//
#include "Board.hpp"
#include <iostream>
#include "Soldier.hpp"

namespace WarGame {
    Soldier*& Board:: operator[](std::pair<int,int> location){
        return this->board[location.first][location.second];
    }
    Soldier* Board:: operator[](std::pair<int,int> location) const{
        return this->board[location.first][location.second];
    }
    void Board::attack(std::pair<int,int> source, Soldier* soldier){
        soldier->attack(board,source);

    }

    void Board:: move(uint player_number, std::pair<int,int> source, MoveDIR direction){
        int r = source.first;
        int c = source.second;
        Soldier* temp = this->board[r][c];

        if (temp==nullptr)
        {
            return;
        }
        std::cout <<"type: " << temp->type << " team: "<< temp->team <<" commander: " << temp->commander << std::endl;
        

        if(temp != nullptr && temp->team == player_number){
            board[r][c] = nullptr;
            //std::cout << temp << std::endl;

            switch (direction)
            {
            case Up:
                this->alertPlace({r,c+1});
                attack({r,c+1}, temp);
                board[r][c+1] = temp;
                break;
            case Down:
                this->alertPlace({r,c-1});
                attack({r,c-1}, temp);
                board[r][c-1] = temp;
                break;
            case Right:
                this->alertPlace({r+1,c});
                attack({r+1,c}, temp);
                board[r+1][c] = temp;
                break;
            case Left:
                this->alertPlace({r-1,c});
                attack({r-1,c}, temp);
                board[r-1][c] = temp;
                break;
            
            default:
                break;
            }
        }
    }
    bool Board:: has_soldiers(uint player_number) const{
        for(std::vector<Soldier*> v:board){
            for(Soldier* s:v){
                if ((s != nullptr) && s->team == player_number)
                {
                    return true;
                }
                
            }
        }
        return false;
    }



};