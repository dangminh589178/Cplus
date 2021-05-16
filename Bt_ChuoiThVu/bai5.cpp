#include<iostream>
using namespace std;
int main()
{
  int first[20], second[20], sum[20], c, n;
 
  cout << "Nhap phan tu o trong mang ";
  cin >> n;

  cout << "Nhap so dau tien" << endl;

  for (c = 0; c < n; c++)
    cin >> first[c];

  cout << "Nhap so thu hai" << endl;

  for (c = 0; c < n; c++)
    cin >> second[c];

  cout << "Tong cua hai so:" << endl;

  for (c = 0; c < n; c++) {
    sum[c] = first[c] + second[c];
    cout << sum[c] << endl;
  }
  return 0;
}
