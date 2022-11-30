/*  C Program to List Files in Directory   */
#include <dirent.h> // directory entry
#include <stdio.h>
 
int main()
{
    DIR *d;
    struct dirent *dir;
    d = opendir(".");    //   . means current location
    //d = opendir("E:/Sourav_Dutta_Aptech/"); // opendir - opens directory
    if(d)
    {
    	// readdir - read files / folders in directory
        while ((dir = readdir(d)) != NULL) 
        {
            printf("%s\n", dir->d_name); // d_name - name of file or folder
        }
        closedir(d); // closedir - close the directory 
    }
    return 0;
}
