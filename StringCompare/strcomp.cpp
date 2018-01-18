//
// Created by korstefan14 on 1/17/18.
//
#include "strcomp.h"

int compare(const char * string1, const char * string2){
    int i = 0;
    int diff=0;
    int alpha=0;
    int romeo=0;
    while (string1[i]!=0 && string2[i]!=0){
        if (string1[i] < 91) {
            alpha = string1[i] + 32;
        }else{
            alpha=string1[i];
        }
        if (string2[i] < 91){
            romeo = string2[i]+32;
        }else{
            romeo = string2[i];
        }
        diff=alpha-romeo;
        if (diff==0){
            i++;
            continue;
        }
        return diff;
    }
    if (string1[i]==0) {
        return -1;
    }else if(string2[i]==0){
        return 1;
    }else {
        return 0;
    }

}

