/**
 * Nhan dip nam moi, hang bia K co chuong trinh khuyen mai cho khach hang.
 * Noi dung cua chuong trinh la neu khach hang dem den cua hang 10 vo chai bia thi se duoc nhan 03 chai bia khuyen mai.
 * Vay neu ban dau anh Bo mua n chai bia thi tong cong anh co the uong duoc tat ca bao nhieu chai?
 * Du lieu nhap:
 * - La so nguyen n (1 = n = 1.000) xac dinh so chai bia anh Bo mua ban dau.
 * Du lieu xuat:
 * - La so nguyen the hien tong cong so chai bia anh Bo co the uong. 
 * Vi du
 * input
 * 10
 * output
 * 13
 * input
 * 24
 * output
 * 33
 * Trong test 2: uong 20 chai doi duoc them 6 chai+ 4 chai con lai doi them 3 chai nua, tong cong uong tat ca 33 chai.
 **/

#include <iostream>
using namespace std;

int main()
{
	int n;
	//cin>>n;
	n = 11;

	int kq = 0;
	while(n > 9)
	{
		int _a = n/10; // lan khuyen mai
		int _b = _a*10; // so vo chai da doi
		int _c = n - _b; // so vo chai con lai

		//cout<<"n="<<n<<" _a="<<_a<<" _b="<<_b<<" _c="<<_c<<" kq="<<kq<<" n2="<<(_c + _a*3)<<endl;

		kq += _b;
		n = _c + _a*3;
	}

	if(n < 10)
		kq += n;

	cout<<kq;

	return 0;
}
