#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <wait.h>
int main() {
  pid_t pid = fork();
  if (pid == 0) {
    printf("child\n");
  } else if (pid > 0) {
    printf("parent\n");
  } else {
    perror("wtf is thiis fork");
  }
  return 0;
}
