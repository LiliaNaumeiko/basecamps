#include <dirent.h> 
#include <stdio.h> 

int main(void) {
  DIR *directory;
  struct dirent *dir;
  directory = opendir(".");
  if (directory) {
    //check all files
    while ((dir = readdir(directory)) != NULL) {
      //to have an input as ls -a
      printf("%s\n", dir->d_name);
    }
    closedir(directory);
  }
  return(0);
}
