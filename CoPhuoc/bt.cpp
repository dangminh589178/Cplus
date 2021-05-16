#include<bits/stdc++.h>

using namespace std;

struct Book {
	string maSach;
	string tenSach;
	int number;	
};
Book obo[100];

void Chen(Book arr[], int &n) {
	do {
		cout << "Nhap sach: ";	
		cin >> n;
	} while (n <= 0);
	
	for(int i = 0; i < n; ++i) {
		cout << "Nhap dau sach thu " << i + 1 << ":" << endl;
		
		
		cout << "Ten sach: ";
		fflush(stdin);
		getline(cin, arr[i].tenSach);
		
		cout << "So luong: ";
		cin >> arr[i].number;
	}
}

int main(){
	int n;
	Chen(obo,n);
	
}
