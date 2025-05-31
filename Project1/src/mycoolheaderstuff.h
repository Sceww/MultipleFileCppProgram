// I don't know how to use these...
// i need to learn to manually compile these files...

#ifndef iostream // if iostream is not defined, then do this?
#include <iostream> // ??? does that work? it probably does.
#endif // !iostream

// declaration of function; defined in functions.cpp
// squares ints above zero, zero if negative.
int NeedsDefinition(int a);

// i think this is the correct way to do this...
// prints whatever you throw at it.
template <typename whatever>
void myprint(whatever a) {
    std::cout << a << std::endl; // ??????? guess it works!
};

// Inline function, needs to be defined within header to work.
// returns largest int
inline int MyCoolInlineFunction (int a, int b) { 
    return (a > b) ? a : b;
};

// Template for printing stuff. unsure if this is the proper formatting... should be fine?

// Structure? wow!
// useless!
struct DylanCoolStruct {
    int INT1;
    int INT2;
    float FLO1;
};

