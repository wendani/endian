// Define a function, which is running on a unknown platform, the function wil
// return indication of platform attribute: big endian or little endian.

enum  {
    BIG_ENDIAN,
    LITTLE_ENDIAN,
};

int endian(void) {
    short x = 0x0100;
    char *p = (char *)&x;
   
    if (*p)
        return BIG_ENDIAN;
   
    return LITTLE_ENDIAN;
}
