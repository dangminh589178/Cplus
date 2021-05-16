#include<stdio.h>
#include<conio.h>
#include <ctype.h>
#include<string.h>
#include <iostream>
using namespace std;
//-------------Bai 2-----------//
int KiemTraKyTuSo(char *s)
{
 int co=0;
 for(int i=0;i<strlen(s);i++)
    {
       for(int j=48;j<=57;j++)
       {
       if(s[i]==j) co=1;
       
       }
    }
 return co;  
}

//--------------Bai 3--------------------//
int KiemTraKyTuHoa(char *s)
{
 int co=0;
 for(int i=0;i<strlen(s);i++)
    {
       if(isupper(s[i]))
       co = 1;
    }
 return co;  
}

//----------Bai 4----------//
int TimKiem(char *s)
{
	char h;
	int co = 0;
	cout<<"Nhap ki tu can tim"<<endl;
	cin>>h;
	
	for(int i=0;i<strlen(s);i++)
    {
       if(s[i] == h)
       co = 1;
    }
return co;

}


//-----------Bai 5---------------//
int TimDoan(char *s){
	
	char c[50];
	cout<<"Nhap doan can tim"<<endl;
	cin>>c;
	char* KiemtraDoiXung(c);
    
    char * pch;
    pch = strstr(s,c);
    //cout<<pch;
    if (pch != NULL)
    	cout<<"Co nam trong chuoi"<<endl; 
			else cout<<"Khong nam trong chuoi"<<endl;
	int m = strlen(s);
	int n = strlen(c);
	if(c>s) cout<<"Do dai chuoi moi nhap vao lon hon chuoi da cho"<<endl;
	 	else cout<<"Do dai chuoi moi nhap vao be hon chuoi da cho"<<endl;
	
	//---------//-------- Bai 6
	int k;
	int doixung = 0;
            for(k=0; k< strlen(c)/2; k++)
            {
                        if(c[k] != c[strlen(c)-1-k])
                        {
							doixung = 1;

                        } 
                        
            }
	if(doixung == 0) cout<<"Chuoi doi xung"<<endl; else cout<<"Chuoi khong doi xung"<<endl;       
	
	//----------Bai 7-------------//
	int dem = 0;
	for(k=0; k <= strlen(c); k++)
            {
				if(c[k] == ' ' && c[k+1] != ' ')
				dem++;	
            }
//            if(c[0] != ' ')
//            {
//            	dem++;
//			}
            	
        cout<<"Co "<<dem<<"tu.";
            

}



int main()
{
	//-----------Bai 1-------------//
 char s[1000];
 printf("vui long nhap chuoi: ");
 gets(s);
 puts(s);
 fflush(stdin);
 if(KiemTraKyTuHoa(s)==1) {
 	cout<<" Chuoi chua ky tu Hoa"<<endl;
 }
   else {
 cout<<"Chuoi khong co ki tu hoa"<<endl;
  }
 if(KiemTraKyTuSo(s)==1) cout<<" Chuoi chua ky tu so"<<endl;
 else cout<<"Chuoi khong co ky tu so"<<endl;
 
 if((TimKiem(s))==1) cout<<"Co ky tu can tim trong chuoi S"<<endl;
 else cout<<"Khong co ky tu can tim"<<endl;

//if(TimDoan(s)==0) cout<<"Khong trong chuoi" ; else cout<<"Co nam trong doan"<<endl;
 TimDoan(s);

 return 0;   
}
