#include <iostream>
#include <conio.h>
#include <stdlib.h> 
#include <string.h> 
using namespace std;

struct songuyen{
    int  n;
	songuyen*tiep; 
}; 

songuyen*head = NULL;


songuyen*nhap(songuyen*f){
	int k;
	songuyen*q;
	f = NULL;
	do{
		printf("0 dung lai ");
		scanf ("%d",&k);
		if (k==0)
		   break;
		q = new songuyen; // cap phat bo nho cho nut moi q  
		q->n =k; 
		q->tiep = f;
		// bo sung dau
		if (f == NULL)
		f = q;
		else {
			q->tiep = f;
			f = q; 
		} 
	} while (1);
	return f; 
} 
// in theo tu nut dau toi nut cuoi 
void inra(songuyen*f){
	songuyen*p;
	p=f;
	while(p!=NULL){
		cout<<p->n<<" ";
		
		p = p->tiep; 
	} printf("\n"); 
}

songuyen *bscuoi(songuyen*f, int x){
	songuyen*q;
	q = new songuyen; // q la nut moi
	q->n = x;
	q->tiep = NULL;
	if (f==NULL) 
	f = q;
	else 
	{
		songuyen *p = f;
		while (p->tiep != NULL) // chuyen q ve nut cuoi 
		p = p->tiep;
		p->tiep = q; 
	 } return f; 
	 
} 
int main (){
	songuyen *first;
	int x;
	first = nhap(first);
	cout<<"\n day so nguyen da nhap: ";
	cout <<"\n nhap vao 1 so nguyen: ";
	cin>>x;
	inra(first);
	bscuoi(first,x);
	 
}
