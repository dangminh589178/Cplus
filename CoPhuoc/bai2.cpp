#include<bits/stdc++.h>

using namespace std;


struct Book {
	string maSach;
	string tenSach;
	string tacgia;
	int number;	
};
Book obo[100];

bool maTrung(Book arr[], int n, string id) {
	for(int i = 0; i < n; i++) {
		if(arr[i].maSach == id)
			return false; //==0
	}
	return true; //error true==1
}

void Chen(Book arr[], int &n) {
	do {
		cout << "Nhap sach: ";	
		cin >> n;
	} while (n <= 0);
	
	for(int i = 0; i < n; ++i) {
		cout << "Nhap dau sach thu " << i + 1 << ":" << endl;
		
		do {
			cout << "Ma sach : ";
			fflush(stdin);
			getline(cin, arr[i].maSach);
			if(maTrung(arr, i, arr[i].maSach) == 0) { // if(!maTrung(arr, i, arr[i].maSach)) ==0 if function ==1 
				cout << "Error " << endl;
			}
		} while (!maTrung(arr, i, arr[i].maSach));
		cout << "Ten sach: ";
		fflush(stdin);
		getline(cin, arr[i].tenSach);
		
		cout << "Ten tac gia: ";
		fflush(stdin);
		getline(cin, arr[i].tacgia);
		
		cout << "So luong: ";
		cin >> arr[i].number;
	}
}

void LaySach(Book arr[], int n) {
	cout << "Ma sach\tTen Sach\tTac gia\tSo luong" << endl;
	for(int i = 0; i < n; ++i) {
		cout << arr[i].maSach << "\t" << arr[i].tenSach << "\t" << arr[i].tacgia << "\t\t" << arr[i].number << endl;
	}
}

void ListLargestNumberOfBook (Book arr[], int n) {
	Book temp;
	for(int i = 0; i < n; ++i) {
		for(int j = i + 1; j < n; ++j) {
			if(arr[i].number < arr[j].number) {
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

int MaxLonNhat(Book arr[], int n) {
	
	int max = arr[0].number;
	for(int i = 0; i < n; ++i) {
		if(max <= arr[i].number)
			max = arr[i].number;
	}
	return max;
}

void maxSoluong(Book arr[], int n, int key) {
	cout << "Ma Sach\tTen Sach\t\tTac gia\tSo luong" << endl;
	for(int i = 0; i < n; ++i) {
		if(arr[i].number == key)
			cout << arr[i].maSach << "\t" << arr[i].tenSach << "\t" << arr[i].tacgia << "\t" << arr[i].number << endl;
	}
}

int main() {
	int n, max;
	Chen(obo, n);
	LaySach(obo, n);
	maxSoluong(obo, n, MaxLonNhat(obo, n));
	cout << "Dau sach lon nhat: " << MaxLonNhat(obo, n);
}
