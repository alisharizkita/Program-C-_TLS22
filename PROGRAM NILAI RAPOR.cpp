//*Program Nilai Rapor*//
#include<iostream>

using namespace std;
int main()
{
    int nilai,predikat;
	cout<<"Masukkan Nilai :    ";
    cin>>nilai;
    if ((nilai>=75))
    cout<<"Predikat : A";
    else if((nilai>=60))
    cout<<"Predikat : B";
    else if((nilai>=40))
    cout<<"Predikat : C";
    else if((nilai>=20))
    cout<<"Predikat : D";
    else cout<<"Predikat : E";
    return 0;
}

