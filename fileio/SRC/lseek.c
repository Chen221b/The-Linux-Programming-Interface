#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

#define BUF_SIZE 10

int main(int argc, char *argv[])
{
    int outputFd, inputFd, readNum;
    char buf[BUF_SIZE];
    off_t offset = 10;
    outputFd = open(argv[1], O_RDONLY);
    inputFd = open(argv[2], O_WRONLY);
    lseek(outputFd, offset, SEEK_CUR);
    while((readNum = read(outputFd, buf, BUF_SIZE)) > 0)
    {
        write(inputFd, buf, BUF_SIZE);
    }
    close(inputFd);
    close(outputFd);
    return 0;
}
