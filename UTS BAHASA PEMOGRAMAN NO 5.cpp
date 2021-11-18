#include <iostream>

using namespace std;

int main (){
	
	cout<<"Jawaban UTS no 5 Bahasa Program"<<endl;
	cout<<"NIM 20200801108 Muhammad Fahri Ramadhan"<<endl;
	cout<<"pertanyaan 5. Buatlah satu program array dua dimensi dengan menggunakan C++"<<endl;
	cout<<"Membuat Matrix dengan dua array dimensi"<<endl;
	cout<<"jumlah baris 5 & kolom 4"<<endl;
	
	int angka[5][4];
	
	for (int x=0;x<5;x++){
		for (int y=0;y<4;y++){
			cout<<"Matriks   =  "<<x<<","<<y<<" =";
			cin>>angka[x][y];
		}
	}
	
	cout<<"Hasil Input dari bilangan anda"<<endl;
	for (int x=0;x<5;x++){
	for(int y=0;y<4;y++){
		cout<<angka[x][y]<<" ";
	
	
}cout<<endl;
}
}
