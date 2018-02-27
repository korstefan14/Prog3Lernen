//
// Created by korstefan14 on 2/27/18.
//

#include "Palindrom.h"
#include <string>
#include <algorithm>
using namespace std;

int is_palindrome(string candidate){
    string cand_cpy=candidate;
    reverse(candidate.begin(), candidate.end());
    if (cand_cpy.compare(candidate)==0){
        return 1;
    }else{
        return 0;
    }
}