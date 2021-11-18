#include <iostream>

using namespace std;

int main (){
	cout<<"20200801108MuhammadFahriRamadhan"<<endl;
	cout<<"=========================="<<endl;
	cout<<"Program Segitiga Siku Siku"<<endl;
	cout<<"=========================="<<endl;
	
	cout<<"Jawaban atas Tugas UTS NO 3 A membuat segitiga siku siku kiri atas"<<endl;
	int tinggi,x,y;
	
	cout<<"Masukan tinggi yang di inginkan"<<endl;
	cin>>tinggi;
	cout<<endl;
	
	for(x=tinggi;x>=1;x--){
		for(y=1;y<=x;y++){
			cout<<"*";
		}
			cout <<endl;

	}
      
      return 0;
}
	
	
	
	

