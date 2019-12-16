#include <vector>

typedef struct {
    char pin;
    void(*key_func)();
} key;

typedef std::vector<key> key_set;
key_set keys;

// ? https://stackoverflow.com/questions/2298242/callback-functions-in-c
// ? https://stackoverflow.com/questions/840501/how-do-function-pointers-in-c-work