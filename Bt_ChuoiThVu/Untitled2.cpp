#include<bits/stdc++.h>
using namespace std;
struct student{
	int id;
	char name[10];
};

int main(){
	int i;
	struct student st[5];
	cout<<"Nhap thong tin cho 5 sinh vien";
	for(int i=0; i<5; i++)
		{
			printf("Nhap Id: ");
			scanf("%d",&st[i].id );
			printf("Nhap Name: ");
			scanf("%s",&st[i].na
			me );
		}
		
		printf("Thong tin sinh vien: \n");
			for(int i=0; i<5; i++)	{
			cout<<"ID"<<st[i].id<<endl;
			cout<<"Name"<<st[i].name<<endl;
			}
	return 0;
}
