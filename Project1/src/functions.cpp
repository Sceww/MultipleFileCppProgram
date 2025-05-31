// Created by Dylan. 
// This cpp file supplies variables and stuff
#include <iostream>

using namespace std;


// supplies header(?) with function definition
int NeedsDefinition (int a) {
    return (a < 0) ? 0 : a * a;
}

// private function, can not be used in 'shared' functions like NeedsDefinition...
static int returnsZero() {
    return 0;
}