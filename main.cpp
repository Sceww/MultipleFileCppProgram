// created by Dylan
// Basic example of linking two different cpp files and calling upon them...

#include<iostream>

// This is my header... Cool stuff!
#include<mycoolheaderstuff.h>

using namespace std;

DylanCoolStruct MyStruct;

int main() {
    MyStruct.INT1 = 5;
    MyStruct.FLO1 = 7.1;
    print(NeedsDefinition(MyStruct.INT1));
    print(NeedsDefinition(-5));
    print(MyStruct.FLO1);
    print(MyCoolInlineFunction(5, 8));
    return 0;
}