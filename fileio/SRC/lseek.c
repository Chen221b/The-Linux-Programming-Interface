#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

#define BUF_SIZE 10

/*  
    argv[1]: output file name
    argv[2]: input file name
*/
int main(int argc, char *argv[])
{
    int test = 100;
    int outputFd, inputFd, readNum;
    char buf[BUF_SIZE];
    off_t offset = 10;
    outputFd = open(argv[1], O_RDONLY);
    inputFd = open(argv[2], O_WRONLY);
    lseek(outputFd, offset, SEEK_CUR);
    while((readNum = read(outputFd, buf, BUF_SIZE)) > 0)
    {
        write(inputFd, &test, 1);
    }
    close(inputFd);
    close(outputFd);
    return 0;
}
