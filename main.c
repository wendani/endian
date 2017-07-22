#include <stdio.h>

enum  {
    BIG_ENDIAN,
    LITTLE_ENDIAN,
};

int endian(void);


int main(int argc, char *argv[])
{
	if (endian() == BIG_ENDIAN)
		printf("Big endian platform\n");
	else
		printf("Little endian platform\n");

	return 0;
}
