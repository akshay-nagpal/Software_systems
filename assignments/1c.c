#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include<sys/sysmacros.h>
int main()
{
	mknod("./myfifo", S_IFIFO|0644,makedev(1,2));
}