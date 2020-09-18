#include<unistd.h>
#include<fcntl.h>
#include<sys/stat.h>
#include<stdlib.h>
int main()
{ 
	char *c=(char *)calloc(50,sizeof(char));
	//int fd1=open("./dummy_6.txt",O_RDONLY,0);
	//int fd2=open("./dummy_6out.txt",O_CREAT|O_RDWR|O_EXCL,0644);
	read(1,c,50);
	write(2,c,50);
	exit(0);
}