#include<unistd.h>
#include<fcntl.h>
#include<sys/stat.h>
int main()
{
	int fd1=open("./dummy_11.txt",O_RDONLY);
	int fd2=open("./dummy_11dup.txt",O_RDWR|O_CREAT|O_EXCL,0644);
	int fd3=dup(fd1,fd2,EBADF);
}