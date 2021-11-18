#include <iostream>

using namespace std;

int main (){
	cout<<"20200801108MuhammadFahriRamadhan"<<endl;
	cout<<"=========================="<<endl;
	cout<<"Program Segitiga Siku Siku"<<endl;
	cout<<"=========================="<<endl;
	
	cout<<"Jawaban atas Tugas UTS NO 3 B membuat segitiga siku siku kiri atas"<<endl;
	int tinggi,x,y,z;
	
	cout<<"Masukan tinggi yang di inginkan"<<endl;
	cin>>tinggi;
	cout<<endl;
	
  for (x=1;x<=tinggi;x++) {
        for (y=1;y<x;y++) {
            cout << " "; // segitiga kiri
        }
         
        for (z=tinggi;z>=x;z--) {
            cout << "*"; // segitiga kanan
		}
			cout <<endl;

	}
      
      return 0;
}
	
	
	
	

