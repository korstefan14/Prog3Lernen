//
// Created by korstefan14 on 2/27/18.
//
#include <iostream>
#include "countdown.h"


void countdown(int n){
    if (n<0){
        return;
    }
    std::cout << n << std::endl;
    countdown(n-1);
}
