#include<bits/stdc++.h>

using namespace std;

int main(){
	FILE *f; char st[80];
	f = fopen("D:/Hello.txt", "rt");
	if(f == NULL)
	{
		cout<<"Loi file";
		return 0;
	}
	else {
		while(!feof(f)){
			if(fgets(st,10,f) != NULL )
				cout<<st;
		}
	}
	fclose(f);
	return 0;
}
