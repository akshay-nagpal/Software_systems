#include<unistd.h>
#include<fcntl.h>
#include<sys/stat.h>
#include<stdlib.h>
int main()
{
	char *buf=(char *)calloc(100,sizeof(char));
	int fd1=open("./dummy_7.txt",O_RDONLY);
	int fd2=open("./dummy_7copy.txt",O_RDWR|O_CREAT|O_EXCL,0644);
	int r=read(fd1,buf,100);
	write(fd2,buf,r);
	close(fd1);
	close(fd2);
}