#include<stdio.h>
void main()
{
char a[3],b[3],c=0,f=0,i;
scanf("%s%",a);
scanf("%s",b);
for(i=0;i<3;i++)
{
    if(a[i]=='o' || a[i]=='b')
    {
        c++;
    }
}
for(i=0;i<3;i++)
{
    if(b[i]=='o' || b[i]=='b')
    {
        f++;
    }
}
printf("%d\n%d",c,f);
}

