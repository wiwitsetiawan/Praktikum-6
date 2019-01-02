

#include <iostream>
#include <conio.h>
using namespace std;

int main(){
int bilangan1,bilangan2,pilihan,keluar;
keluar=0;
float hasil;
cout<<"Program Kalkulator\n";
cout<<"=================\n\n";

cout<<"Masukan bilangan A: ";cin>>bilangan1;
cout<<"Masukan bilangan B: ";cin>>bilangan2;
cout<<endl;

menu:
cout<<"Pilihlah oprasinya di bawah ini :\n";
cout<<"[1] Penjumlahan\n";
cout<<"[2] Pengurangan\n";
cout<<"[3] Perkalian\n";
cout<<"[4] Pembagian\n";
cout<<"[0] Keluar dari Aplikasi\n";
cout<<endl;
cout<<"Masukkan pilihan anda : ";
cin>>pilihan;

switch (pilihan)
  {
  case 1:
      hasil=bilangan1+bilangan2;
      cout<<"Hasil penjumlahan dari "<<bilangan1<<" + "<<bilangan2<<" adalah: "<<hasil<<endl<<endl;
      break;

  case 2:
      hasil=bilangan1-bilangan2;
      cout<<"Hasil pengurangan dari "<<bilangan1<<" - "<<bilangan2<<" adalah: "<<hasil<<endl<<endl;
      break;

  case 3:
      hasil=bilangan1*bilangan2;
      cout<<"Hasil perkalian dari "<<bilangan1<<" x "<<bilangan2<<" adalah: "<<hasil<<endl<<endl;
      break;

  case 4:
      hasil=bilangan1/bilangan2;
      cout<<"Hasil pembagian dari "<<bilangan1<<" / "<<bilangan2<<" adalah: "<<hasil<<endl<<endl;
        break;

  case 0:

    hasil=keluar;
    goto selesai;

          default :
        cout<<"Maaf Pilihan tidak Terdaftar";

  }if (hasil==hasil)
  {
       goto menu;
    }

    selesai:
     return 0;
getch();
}

