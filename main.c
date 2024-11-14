
#include "get_next_line.h"
#include <unistd.h>
int main()
{
    int fd  = open("test.txt",O_RDWR);
    printf("%s", get_next_line(fd));
    printf("%s", get_next_line(fd));
    printf("%s", get_next_line(fd));
    // printf("%s", get_next_line(fd));
    close(fd);
}













    // int fd  =open("test.txt", O_CREAT | O_WRONLY);
    // if (fd  == -1)
    // {
    //     printf("error");
    //     return 0;
    // }
    // ft_putstr_fd("aderader",  fd);
    // close(fd);
    // if (fd  == -1)
    // {
    //     printf("error00");
    //     return 0;
    // }
    // char *r = malloc(10);
    // if(r == NULL)
    // {
    //     printf("error mal");
    //     return 0;
    // }
    // int tet = read(fd,r,8);
    // r[9] = '\0';
    // close(fd);
    // printf("$%s$\n %i",r,tet);