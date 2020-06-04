#include<stdio.h>
int main()
{

    FILE *fp,*fs;
    int i=0,j=0,k=0;
    int m_com=0,string1=0;
    remove("numeric.txt");
    char arr[100],r[100][100];
    fp=fopen("forloop.txt","r");
    fs=fopen("numeric.txt","a");
    do
    {
        i=0;
        fgets(arr,100,fp);

        while(arr[i]!='\0')
        {

            while(arr[i]>='0' && arr[i]<='9')
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
            i++;
        }
    }
    while(strcmp(arr,"END")!=0);
    for(i=0; i<j; i++)
    {
        fputs(r[i],fs);
        fputs("\n",fs);
    }
}
