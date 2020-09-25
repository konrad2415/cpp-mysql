#define size 80

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
using namespace std;

int main()
{
     FILE *fp;
     char buff[100];
     int i = 0;
     int var[100];

     fp = fopen("./config.inc","r");
     while(fgets(buff,sizeof(buff),fp))
     {
          for(i=0;i<strlen(buff);i++)
          {
               if(isdigit(buff[i]))
               {
                    var[i] = buff[i] - 48;
                    printf("%d",var[i]);
                    printf("\n");
                }
          }
     }

     printf("\n\n\n\n");


     system("pause");
     return 0;
}
