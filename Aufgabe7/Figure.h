//
// Created by korstefan14 on 1/17/18.
//
#import "structs.h"

#ifndef PROG3LERNEN_FIGURE_H
#define PROG3LERNEN_FIGURE_H
class Figure{
    Point p1,p2;
public:
    Point getP1(){
        return this->p1;
    }
    Point getP2(){
        return this->p2;
    }
    void setP1(Point p1){
        this->p1=p1;
    }
    void setP2(Point myPoint){
        p2=myPoint;
    }
};

#endif //PROG3LERNEN_FIGURE_H
