#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
int main()
{
	int count=0;
	const char *a[5]={"./dummy1.txt","./dummy2.txt","./dummy3.txt","./dummy4.txt","./dummy5.txt"};
	for(;;)
	{
		if(count<5)
		{
            
             int fd1= creat(a[count],0644);
		     count++;
        }
	}
	
	//printf("%d\n",fd1);
}
/* O/P
total 0
dr-x------ 2 akshay akshay  0 Sep 18 02:15 ./
dr-xr-xr-x 9 akshay akshay  0 Sep 18 02:15 ../
lrwx------ 1 akshay akshay 64 Sep 18 02:17 0 -> /dev/pts/1
lrwx------ 1 akshay akshay 64 Sep 18 02:17 1 -> /dev/pts/1
lrwx------ 1 akshay akshay 64 Sep 18 02:17 2 -> /dev/pts/1
l-wx------ 1 akshay akshay 64 Sep 18 02:17 3 -> '/home/akshay/Documents/Software systems/assignments/dummy1.txt'
l-wx------ 1 akshay akshay 64 Sep 18 02:17 4 -> '/home/akshay/Documents/Software systems/assignments/dummy2.txt'
l-wx------ 1 akshay akshay 64 Sep 18 02:17 5 -> '/home/akshay/Documents/Software systems/assignments/dummy3.txt'
l-wx------ 1 akshay akshay 64 Sep 18 02:17 6 -> '/home/akshay/Documents/Software systems/assignments/dummy4.txt'
l-wx------ 1 akshay akshay 64 Sep 18 02:17 7 -> '/home/akshay/Documents/Software systems/assignments/dummy5.txt'
*/