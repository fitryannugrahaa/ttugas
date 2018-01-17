#include <iostream>
#include <string>
using namespace std;

class serigala{
	public:
		void bersuara(string bunyi);
		string jenisMakanan;
		string warnaBulu;
};

int main(){
	serigala serigalamerah,serigalarusia,serigalaarktik;
	
	serigalamerah.warnaBulu = "COKLAT";
	serigalarusia.warnaBulu = "PUTIH";
	serigalaarktik.warnaBulu = "HITAM";
	
	serigalamerah.jenisMakanan = "Rusa.";
	serigalarusia.jenisMakanan = "Kijang.";
	serigalaarktik.jenisMakanan = "Babi Hutan.";
