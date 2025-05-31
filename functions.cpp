// Created by Dylan. 
// This cpp file supplies variables and stuff
#include<iostream>

// supplies header(?) with function definition
int NeedsDefinition (int a) {
    return (a < 0) ? returnsZero() : a * a;
}

// private function
static int returnsZero() {
    return 0;
}