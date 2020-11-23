//
// Created by Raju on 11/22/2020.
//
#include <iostream>
#include "Cat.h"
using namespace std;

void Cat::speak(){

    if(happy) {
        cout << "Meow" << endl;
    }else{
        cout << "Sssss" << endl;
    }
}
void Cat::makeHappy(){
    happy = true;
}

void Cat::makeSad(){
    happy = false;
}