#include<stdio.h>
int main()
{

    FILE *fp;
    int i=0,n,m=0;

    char arr[100],r[100][100];
    printf("Enter the line number: ");
    scanf("%d",&n);
    fp=fopen("forloop.txt","r");
    do
    {
        i=0;
        fgets(arr,100,fp);
        m++;

        if(m==n)
        {
            while(arr[i]!='\0')
            {
                while(arr[i]!=';' && arr[i+1]!='\0')
                {
                    i++;
                }
                i++;
            }
            if(arr[i-2]==';')
            {
                printf("line %d have semicolon in the end of the line",n);
                break;
            }
            else
            {
                printf("line %d doesn't have semicolon in the end of the line",n);
                break;
            }
        }
    }
    while(strcmp(arr,"END")!=0);
}

