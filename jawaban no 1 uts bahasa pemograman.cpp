#include <iostream> //preprocessor library iostream berguna untuk input dan output
#include <string>  // preprocessor library string berguna untuk menggunakan tipe data string
#include <conio.h> //preprocessor library conio.h berguna   untuk membuat teks antarmuka pengguna

using namespace std; //digunakan untuk memberitahu compiler, kita akan menggunaka semua class yang masuk kedalam
					//space std.
					
int main (){  //fungsi dalam c++ yang akan dijalankan dan dibaca oleh compiler
	string b; //deklarasi variabel b bertipe data string berguna untuk menampung inputan
	cout<<"Masukan kalimat yang ingin ditampilkan"<<endl; //pada line 10 berguna untuk menuliskan atau memasukan
														  //kalimat dan juga menampilkan kalimat dari yang telah di tuliskan
	cin>>b;	 //memasukan sebuah input dari sebelumnya yang telah diterima kedalam variabel b
	cout<<"\n"; //output untuk baris baru
	cout<<b; 
	   getch( ); //untuk membaca sebuah karakter tanpa perlu menekan enter. 
	   			//getch( ) tidak menampilkan karakter dari tombol yang ditekan, sedangkan getche( ) menampilkan karakter dari tombol yang ditekan.

}
