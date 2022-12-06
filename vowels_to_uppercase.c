#include<stdio.h>
int main()
{
    char a[100];
    fgets(a,sizeof(a),stdin);
    for(int i=0;a[i]!='\0';i++)
    {
        if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u')
        {
            a[i]=a[i]-32;
        }
    }printf("%s ",a);
}
