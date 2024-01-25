#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <wait.h>
int main() {
  pid_t pid = fork();
  if (pid == 0) {
    // Child
    sleep(2);
    execl("/usr/bin/exa", "-al", NULL);
    printf("child");
  } else if (pid > 0) {
    // Parent
    execl("/usr/bin/ls","-a", "-l", NULL); 
    // execl("./activity-2-fork", "--test");
    printf("parent");
  } else {
    
  }
  return 0;
}
