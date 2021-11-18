#include <iostream>
using namespace std;

int main()
{
    int a, x1 = 0, y2 = 1, selanjutnya = 0;
    cout<<"Jawaban UTS No  2.	Buatlah program untuk menghasilkan deret fibonacci /n"<<endl;
    cout<<"Masukan Batas Deret Bilangan Fibonacci :  "<<endl;
    cin>>a;
	cout<<endl;
    cout<<"Deret Fibonacci: ";

    for (int i = 1; i <= a; ++i)
    {
        // Pada beberapa line dibawah ini mencetak dua deret bilangan fibonacci pertama.
        if(i == 1)
        {
            cout << " " << x1<<" ";
            continue;
        }
        if(i == 2)
        {
            cout << y2 << " ";
            continue;
        }
        selanjutnya = x1 + y2;
        x1 = y2;
        y2 = selanjutnya;
         // Mencetak deret bilangan fibonacci selanjutnya.
        cout << selanjutnya << " ";
    }
    return 0;
}
