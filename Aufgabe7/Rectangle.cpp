//
// Created by korstefan14 on 1/17/18.
//

#include "Rectangle.h"
#include "Figure.h"
#include "structs.h"

class Rectangle : Figure{

    struct Size calcSize(){
        struct Size mySize;
        mySize.h=getP2().y-getP1().y;
        mySize.w=getP2().x-getP1().x;
        if (mySize.h<0){
            mySize.h=-mySize.h;
        }
        if (mySize.w<0){
            mySize.w=-mySize.w;
        }
        return mySize;
    }

    int calcArea(){
        return this->calcSize().h*this->calcSize().w;
    }
};