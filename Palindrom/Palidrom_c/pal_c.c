//
// Created by korstefan14 on 2/27/18.
//

#include <string.h>

int it_pal(const char*candidate){
    int i;
    while (candidate[i]!=0){
        i++;
    }
    int wortlaenge=i-1;
    int n= wortlaenge;
    for(i=0;i<wortlaenge;i++){
        while (candidate[i]==32){
            i++;
        }
        while (candidate[n]==32){
            n--;
        }
        if (candidate[i]!=candidate[n]){
            return 0;
        }
        n--;
    }
    return 1;

}