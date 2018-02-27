#include <iostream>
#include <stdio.h>
#include "StringCompare/strcomp.h"
#include "Fibonnacci/fibonacci.h"
#include "Konstruktor/Bruch.h"
#include "Countdown/countdown.h"
#include "Palindrom/Palidrom_c/pal_c.h"



int main() {
    char myarray[9];
    int myarray2[]={1,2,3,4};
    myarray[1]='j';
    myarray[0]='h';
    //Bruch myButter=Bruch(1,2);
    //std::cout << myButter << std::endl;
    //Bruch * myButter=new Bruch(1,2);
    //std::cout << *myButter << std::endl;
    //std::string j;
    //std::cout << myarray;
    //std::cin >> j;
    //std::cout << j;

    const char* mystring = "lagerregal";
    cout << mystring << ": " << it_pal(mystring);

    return 0;
    char*myString=(char*)7;
    myString[0];
    //*(myString +i)==myString[i]

    //['H']['e']['l']['l']['o'][0]
    //  |
    //  7    8    9    10   11  12

}