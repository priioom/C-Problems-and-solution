#include <stdio.h>

int main()
{
    char s[100];
    char b[100];
    int c = 0;
    int temp=0,temp1=0,temp2=0;
fgets(s,100,stdin);
    int i=0;
    int j=0;
    while (s[c] != '\0')
    {
        b[c]=s[c];
        if(s[c]==' '|| s[c]=='\n')
        {
            temp=0,temp1=0,temp2=0;

            for(i=j; i<=c; i++)
            {
                printf("%c",b[i]);
                j=i;
                if(b[i]=='.')
                {
                    temp++;
                }
                else if(isdigit(b[i]))
                {
                    temp1++;
                }

            }
            printf("===");
            if(temp1 >=0 && temp>0 )
            {
                printf(" It's a float number\n",b[j]);
                b[c]=NULL;
            }
            else if(temp==0&&temp1>0)
            {
                printf(" it's a number\n", b[j]);
                b[c]=NULL;
            }
            else
            {
                printf(" it's a charecter\n",b[j],temp);
                b[c]=NULL;
            }
        }
        c++;

    }

    return 0;
}
