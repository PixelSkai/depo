#include<iostream>
using namespace std;
class ogrenci{
	public:
		int ogrno;
		char *adi;
		void yaz();
};
void ogrenci::yaz()
{
	cout << ogrno << " " << adi << endl;
}
int main()
{
	ogrenci ogr1;
	ogr1.ogrno=123;
	ogr1.adi="beyza";
	ogrenci ogr2;
	ogr2.ogrno=456;
	ogr2.adi="akif";
	ogr1.yaz();
	ogr2.yaz();
}
