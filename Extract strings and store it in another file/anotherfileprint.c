#include<stdio.h>
int main()
{

    FILE *fp,*fs;
    int i=0,j=0,k=0;
    int m_com=0,string1=0;
    remove("string.txt");
    char arr[100],r[100][100];
    fp=fopen("forloop.txt","r");
    fs=fopen("string.txt","a");
    do
    {
        i=0;
        fgets(arr,100,fp);

        while(arr[i]!='\0')
        {
            if(string1==1)
            {
                fputc(arr[i],fs);
                i++;
                if(arr[i]=='"')
                {
                    string1=0;
                    fputc('\n',fs);
                    break;
                }
                continue;
            }
            if(m_com==1)
            {
                if(arr[i]=='*' && arr[i+1]=='/')
                {
                    m_com=0;
                    //break;
                }
                else
                {
                    i++;
                }
                if(m_com==1)
                    continue;
            }
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
            if(arr[i]=='/' && arr[i+1]=='*')
            {
                m_com=1;
            }
            if(arr[i+1]=='"')
            {
                string1=1;
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
