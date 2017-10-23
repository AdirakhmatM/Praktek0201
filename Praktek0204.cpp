#include <iostream>
using namespace std;

int main(){
	double Luas_rumah = 42;
	double Lantai_parket = 193*1215;
	double Luas_1box = Lantai_parket*8/1000000;	
	double Jumlah_boxpkt, Biaya_pkt, Biaya_psg, Total_by;
	
	cout <<" Luas Rumah 			: "<<Luas_rumah<<" m2"<<endl;
	cout <<" Luas 1 Box Parket 		: "<<Luas_1box<<" m2"<<endl;
	
	Jumlah_boxpkt = Luas_rumah/Luas_1box;
	cout <<" Jumlah Box Parket		: "<<Jumlah_boxpkt<<endl;
	
	Biaya_pkt = Jumlah_boxpkt*500;
	cout <<" Biaya Parket (Rp)		: "<<Biaya_pkt<<endl;
	
	Biaya_psg = Luas_rumah*20;
	cout <<" Biaya Pasang (Rp)		: "<<Biaya_psg<<endl;
	
	Total_by = Biaya_pkt+Biaya_psg;
	cout <<" Total Biaya (Rp)		: "<<Total_by<<endl;
}
