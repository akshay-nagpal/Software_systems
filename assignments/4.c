#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include<stdio.h>
int main()
{
	//int fd1=open("./dummy.txt",O_RDONLY);
	//int fd1=open("./dummy.txt",O_CREAT|O_EXCL,0444);
	//printf("%d\n",fd1);
	int fd2=open("./dummy.txt",O_CREAT|O_RDWR|O_EXCL,0644);
	if(fd2==-1)
	{
		perror("Error");
	}
}