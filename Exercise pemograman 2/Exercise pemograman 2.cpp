#include <iostream> 
using namespace std; 

class bidangDatar {
private:
	int x;//variabel untuk menyimpan input dari lingkaran maupun bujursangkar     
	bidangDatar() { //constructor         x=0;     }
		virtual void input() {} // fungsi yang menerima input dan mengirim input melalui fungsi setX untuk disimpan di x     
		virtual float Luas()//fungsi untuk menghitung luas   
		{
			return 0;
		}
		virtual float keliling()//fungsi untuk menghitung keliling  
		{
			return 0;
		}
		void setX(int lingkaran, int Bujursangkar){ //fungsi untuk memberi/mengirim nilai pada x     
			this->x = a;
		int getX()
			return x;
	}
}:

	class Lingkaran :public bidangDatar { /**/ };
		
}:
	
class Bujursangkar :public bidangDatar { /**/ };

}:

int main(){
	bidangDatar Lingkaran;

	Masukkan jejari = ("6");
	Luas lingkaran = ("113.04");
	keliling  lingkaran = (" 37.68");

	cout << lingkaran.jejari(6) << endl;
	cout << lingkaran.luas(113.04) << endl;

	bidangDatar Bujursangkar;

	Masukkan sisi = (" 5");
	Luas bujursangkar = ("25");
	Keliling bujursangkar = ("20");

	
