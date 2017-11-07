#include <sys/stat.h>
#include <fcntl.h>
#include <ctype.h>
#include "../INC/tlpi_hdr.h"

int main(int argc, char const *argv[])
{
	printf("%s\n", argv[1]);
	printf("%s\n", &argv[1][1]);
	return 0;
}