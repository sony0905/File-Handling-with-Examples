/*WAP TO CREATE TEXT FILE CONTAINING NAMES OF THE STUDENTS THEN CLOSE IT AND REOPEN IT TO APPEND MORE NAMES AT END OF THE FILE*/
#include<stdio.h>
main()
{
    FILE *fp;
    char str[15];
    int n,i,n1;
    fp=fopen("file1.txt","w");
    printf("enter names\n");
    scanf("%d",&n);
    gets(str);
        fputs(str,fp);

    for(i=1;i<=n;i++)
    {
        gets(str);
        fputs(str,fp);

    }
    fclose(fp);
    fp=fopen("file1.txt","a");
    printf("enter no. of more names\n");
    scanf("%d",&n1);
    gets(str);
        fputs(str,fp);
        for(i=1;i<=n1;i++)
    {
        gets(str);
        fputs(str,fp);

    }
    fclose(fp);
}
