#include<iostream>
using namespace std;
class ogrenci{
	public:
		int ogrno;
		char *adi;
		void yaz();
};
void ogrenci::yaz(){
cout << ogrno << " " << adi << endl;
}
int main()
{
	ogrenci ogr1;
	ogr1.ogrno=2018317043;
	ogr1.adi="akif";
	ogr1.yaz();
}
