#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
int main()
{
	int fd1= creat("./mynewfile.txt",0644);
	printf("%d\n",fd1);
}
