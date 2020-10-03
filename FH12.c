
fscanf(fp,"%s",st);
#include<stdio.h>
#include<string.h>
#include<math.h>
main()
{
    FILE *fp;
    char str[15],st1[15],st[15];
    int n,i,l,min=100;
    fp=fopen("file1.txt","w");
    printf("enter names\n");
    scanf("%d",&n);
    gets(str);
        fputs(str,fp);

    for(i=1;i<=n;i++)
    {
        gets(str);
        fprintf(fp,"%s",str);

    }
    fclose(fp);
    fp=fopen("file1.txt","r");
    if(fp==NULL)
    {
        printf("file cannot open");
        exit(1);
    }
    while(!eof(fp))
    {
        fscanf(fp,"%s",st);
        printf("%s\n",st);
        l=strlen(st);
        printf("%d\n",l);
        if(min>l)
        {
            min=l;
            strcpy(st1,st);
        }
        fscanf(fp,"%s",st);
    }
    printf("name having min. no of characters is %s\n",st1);
    fclose(fp);
}
