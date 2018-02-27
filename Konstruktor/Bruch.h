//
// Created by korstefan14 on 1/23/18.
//

#ifndef PROG3LERNEN_BRUCH_H
#define PROG3LERNEN_BRUCH_H

#include <iostream>
#include <stdio.h>

using namespace std;

class Bruch{
public:
    Bruch(int zaehler, int nenner){
        this->zaehler=zaehler;
        this->nenner=nenner;
    }
    Bruch(int zaehler){
        Bruch(zaehler,1);
    }
    Bruch(){
        //this->zaehler=1;
        //this->nenner=1;
        Bruch(1,1);
    }
    ~Bruch(){};
    int getNenner(){
        return this->nenner;
    }
    int getZaehler(){
        return this->zaehler;
    }
private:
    int zaehler;
    int nenner;
    friend ostream& operator << (ostream& s, const Bruch& b){
        return s<< b.zaehler << '/' << b.nenner;
    }
};
#endif //PROG3LERNEN_BRUCH_H
