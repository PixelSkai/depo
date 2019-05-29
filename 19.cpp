#include<iostream>
using namespace std;
class notlar{
	public:
		int vize;
		int final;
};
class ogrenci{
	public:
		int ogrno;
		char *adi;
		notlar ogrnot;
};
int main()
{
	ogrenci ogr1;
	ogr1.ogrno=123;
	ogr1.adi="Akif";
	ogr1.ogrnot.vize=100;
	ogr1.ogrnot.final=100;
	cout << ogr1.adi << " " << ogr1.ogrnot.final << endl;
}
