#include<stdio.h>
int main()
{

    FILE *fp;
    int i=0,j=0,k=0;

    char arr[100],r[100][100];
    fp=fopen("forloop.txt","r");
    do
    {
        i=0;
        fgets(arr,100,fp);

        while(arr[i]!='\0')
        {
            while(arr[i]>='a'&& arr[i]<='z'||arr[i]>='A'&& arr[i]<='Z')
            {
                r[j][k]=arr[i];
                k++;
                i++;

            }
            if(k!=0)
            {
                r[j][k]='\0';
                j++;
                k=0;
            }
            if(arr[i]=='#')
            {
                break;
            }
            i++;
        }
    }
    while(strcmp(arr,"END")!=0);
    for(i=0; i<j; i++)
    {
        printf("%s\n",r[i]);
    }
}
