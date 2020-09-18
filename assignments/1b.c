#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include<sys/stat.h>
#include<sys/types.h>
int main()
{
	int fd1=open("dummy_1b.txt",O_CREAT|O_WRONLY|O_TRUNC,0666);
	char message[]="This is my file\nhello there";
	write(fd1,message,sizeof(message));  
	close(fd1);  
    const char  *a="./dummy_1b.txt",*b="./hardlink.txt";
    int s=link(a,b);
	return 0;
}
