#include<bits/stdc++.h>

using namespace std;

int main(){
	FILE *f; int dong,cot;
	int MT[]
	f = fopen("D:/MaTran.txt", "rt");
	if(f == NULL)
	{
		cout<<"Loi file";
		return 0;
	}
	// doc file tu txt va dua vao mang 2 chieu
	else {
		if (fscanf(f,"%d %d", &dong,&cot)!= 0)
			for(i=0; i<dong; i++)
				for(j=0; j<cot; j++)
					if(fscanf(f,"%d", &so)!=0)
						MT[i][j] = so;
			//			
		for(i=0; i<dong; i++)
		{
			for(j=0; j<cot; j++)
			printf("%d", MT[i][j])
			printf("\n");
		}
			
		}
	fclose(f);
	return 0;
}
