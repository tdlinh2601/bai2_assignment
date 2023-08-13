#include <stdio.h>
#include <stdlib.h>

int i;
int main(int argc, char *argv[]) 
{ 
    if(argc==3)
    {
        for(i=1;i<argc;i++)
        { 
            int a = atoi(argv[1]);
            int b = atoi(argv[2]);
            printf ("Doan [a,b] = [%d,%d]\n",a,b);
            printf("Chuoi:");
            for(i=a;i<=b;i++)
            {               
                printf("%3d",i);             
            }
        }           
    } 
    else
    {
        printf("Nhap lai doan [a,b]");
    }
}