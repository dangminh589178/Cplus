#include<bits/stdc++.h>
using namespace std;
void XoaKhoangTrangThuaDauCuoiChuoi(string &str){
	
	while(str[0] == ' '){
		str.erase(str.begin() + 0);
	}

	while(str[str.length()-1] == ' ' ){
		str.erase(str.begin() + str.length()-1);
	}
	cout<<"Chuoi sau khi xoa o dau va cuoi chuoi: "<<str<<endl;
	cout<<"Do dai sau khi xoa o dau va cuoi chuoi: "<<str.length()<<endl;
}

void XoaKhoangTrangOGiuaCacTu(string &str){
	int n = str.length();
	for(int i = 0; i<n; i++)
	{
		if(str[i] == ' ' &&str[i+1] == ' ')
		{
			str.erase(str.begin() + i+1);
			i--;
		}
	}
	cout<<"Sau khi xoa khoang trang o giua cac tu: "<<str<<endl;
}

void InHoaKyTuDau(string &str){
	strlwr((char*)str.c_str());
	
	if(str[0] != ' ' )
		str[0] -= 32;
	for(int i = 0; i<str.length(); i++)
	{
		if(str[i] == ' ' && str[i+1] != ' ' )
		//A:65
		//a:97
		str[i+1] -= 32;
		
	}
	
	cout<<str<<endl;
	
}

int main(){
	string str;
	getline(cin,str);
	cout<<"Chuoi nhan duoc: "<<str<<endl;
	cout<<"Do dai cua chuoi nhap vao: "<<str.length()<<endl;
	XoaKhoangTrangThuaDauCuoiChuoi(str);
	XoaKhoangTrangOGiuaCacTu(str);
	InHoaKyTuDau(str);
}
