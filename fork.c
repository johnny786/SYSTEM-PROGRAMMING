#include<fcntl.h>
#include<sys/stat.h>
#define BUFSIZE 1024
int main()
{
  int fd;
  while(1)
  {
    if((fd=open("/etc/passwd",O_RDONLY))==-1)
    {
      perror("open");
      exit(1);
      
    }
    printf("file des:%d\n",fd);
  }
  exit(0);
}
