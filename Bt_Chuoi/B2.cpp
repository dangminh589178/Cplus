#include <stdio.h>
#include <string.h>
main()
{
	char s[100];
	gets(s);
	int dem;
	int i,j,m;
	int max=0;
	for(i=0;i<strlen(s);i++)
	{
		dem=1;
		for(j=i+1;j<strlen(s);j++)
		{
			if(s[j]==s[i]&&dem>max)
			{
				max=dem;
				dem++;
				m=j;
			}
		}
	}
	printf ("Ki tu xuat hien nhieu nhat la: %c",s[m]);
}         
