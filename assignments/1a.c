#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include<sys/stat.h>
#include<sys/types.h>
int main()
{
	int fd1=open("dummy_1a.txt",O_CREAT|O_WRONLY|O_TRUNC,0644);
    char message[]="This is my file\nhello there";
	write(fd1,message,sizeof(message));   
	close(fd1); 
    const char  *a="./dummy_1a.txt",*b="./sftlink.txt";
    int s=symlink(a,b);
	return 0;
}
