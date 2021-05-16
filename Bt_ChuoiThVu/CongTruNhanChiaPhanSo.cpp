#include<bits/stdc++.h>
using namespace std;

struct phanso
{
	int tu;
	int mau;
};
void nhapphanso(phanso &ps)
{
	printf("\nNhap vao tu so ");
	scanf("%d",&ps.tu);
	do
	{
		printf("\nNhap vao mau so ");
		scanf("%d",&ps.mau);
		if(ps.mau==0)
			printf("\nMau phai khac khong\nVui long kiem tra lai");
	}while(ps.mau==0);
}

void xuatphanso(phanso ps)
{
	printf("Phan so: %d / %d",ps.tu,ps.mau);
}

phanso tongps(phanso a,phanso b)
{
	phanso tong;
	tong.tu=a.tu*b.mau+b.tu*a.mau;
    tong.mau=a.mau*b.mau;
	
	return tong;
}
phanso hieups(phanso a,phanso b)
{
	phanso h;
	h.tu=a.tu*b.mau-b.tu*a.mau;
    h.mau=a.mau*b.mau;
	
	return h;
}
phanso tichps(phanso a,phanso b)
{
	phanso tich;
	tich.tu=a.tu*b.tu;
	tich.mau=a.mau*b.mau;
	
	return tich;
}
phanso thuongps(phanso a,phanso b)
{
	phanso thuong;
	thuong.tu=a.tu*b.mau;
	thuong.mau=a.mau*b.tu;
	
	return thuong;
}

int main()
{
	phanso x,y;
	printf("\nNhap phan so thu nhat ");
	nhapphanso(x);
	xuatphanso(x);
	printf("\nNhap phan so thu 2");
	nhapphanso(y);
	xuatphanso(y);
	phanso tong= tongps(x,y);
	printf("\n tong ");
	xuatphanso(tong);
	phanso hieu=hieups(x,y);
	printf("\nHieu ");
	xuatphanso(hieu);
	phanso tich=tichps(x,y);
	printf("\nTich ");
	xuatphanso(tich);
	phanso thuong=thuongps(x,y);
	printf("\nThuong ");
	xuatphanso(thuong);
	return 0;
	
}
