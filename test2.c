#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdio.h>


int main(int argc,char **argv)
{
  struct stat statbuf;
  int eists=1;
  
  
  if((access(argv[1],F_OK)==0))
  {
     lstat(argv[1],&statbuf);
     if(S_ISREG(statbuf.st_mode))
     {
       unlink(argv[1]);
       exists=0;
     }
  }else
    exists=0;
    
    if(exists=0)
      mkdir(argv[1],S_IRWXU|S_IRGRP|S_IXGRP|S_IROTH|S_IXOTH);
}
