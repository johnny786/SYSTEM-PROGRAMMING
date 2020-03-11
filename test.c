#include<unistd.h>
#include<fcntl.h>


int main(int argc,char **argv)
{
 int fd,n;
 char u;
 
 fd=open(argv[1],O_RDONLY);
 while((n=read(fd,&u,1))>0)
 {
    if(u>=97 && u<=122)
    u -=32;
    write(STDOUT_FILENO,&u,1);
    
 }
 close(fd);
}
