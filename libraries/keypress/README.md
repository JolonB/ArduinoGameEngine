# Keypress

The keypress library is designed to provide functionality when keys are
pressed. The keys are specified with a struct storing the physical pin the key
is attached to and a pointer to the function to be called when the key is
pressed. The function has to be of the form `void func_name(void)`, as in, it
cannot take or return any arguments.
