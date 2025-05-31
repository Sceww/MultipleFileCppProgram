// created by Dylan
// Basic example of linking two different cpp files and calling upon them...

#include<iostream>

// This is my header... Cool stuff!
#include "mycoolheaderstuff.h"

using namespace std;

DylanCoolStruct MyStruct;

int main() {
    MyStruct.INT1 = 5;
    MyStruct.FLO1 = 7.1;
    myprint(NeedsDefinition(MyStruct.INT1));
    myprint(NeedsDefinition(-5));
    myprint(MyStruct.FLO1);
    myprint(MyCoolInlineFunction(5, 8));
    return 0;
}