#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
int main(){
int fd;
char buffer[80];
char msg[50]="Ashish Pokhrel";
fd=open("check.txt",O_RDWR);
printf("fd=%d",fd);
if (fd!=-1){
printf("\n check.txt opened with read write access \n");
write (fd,msg,sizeof(msg));
lseek(fd,0,SEEK_SET);
read(fd,buffer,sizeof(msg));
printf("\n %s was written to the file \n",buffer);
close(fd);
}
return 0;
}
