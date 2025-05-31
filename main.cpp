// created by Dylan
// Basic example of linking two different cpp files and calling upon them...

#include<iostream>

// This is my header... Cool stuff!
#include<mycoolheaderstuff.h>

using namespace std;

static DylanCoolStruct MyStruct; 

int main() {
    cout << NeedsDefinition(5) << endl;


    return 0;
}