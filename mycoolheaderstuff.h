// I don't know how to use these...

// declaration of function; defined in functions.cpp
int NeedsDefinition (int a);

// Inline function, needs to be defined within header to work.
inline int MyCoolInlineFunction (int a, int b) { 
    return (a > b) ? a : b;
};

// Template for printing stuff. unsure if this is the proper formatting... should be fine?
template <typename T> 
void print(T a) {
    cout << a << endl;
};

// Structure? wow!
struct DylanCoolStruct {
    int INT1;
    int INT2;
    float FLO1;
};

