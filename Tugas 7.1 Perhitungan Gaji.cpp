#include <iostream>
using namespace std;
double pokok (double);
float lembur (float);
float uang_makan(float);
float uang_transport(float);


int main(){
  float jam_kerja,gaji_pokok;
  string nama_krywn,nip;
  char input;
  top :
  cout << "\t=================================" << endl;
  cout << "\tProgram C++ \n\tMenghitung gaji \n\tKaryawan PT.XYZ\n";
  cout << "\t=================================" << endl;
  cout << "Masukan nama Karyawan             :";
  cin >> nama_krywn;
  cout << "Masukan nomor induk pekerja (NIP) :";
  cin >> nip;
  cout << "Masukan jumlah jam kerja          :";
  cin >> jam_kerja;
  cout << endl;

  gaji_pokok = pokok(jam_kerja);
  cout <<"Nama :"<< nama_krywn <<"  NIP :"<< nip << " \ngaji pokok anda sebesar :" << gaji_pokok;
  cout << endl;

  if (jam_kerja > 8){
       cout << "anda mendapat kan upah lembur :" << lembur(jam_kerja) << " \ntotal gaji anda : " << gaji_pokok + lembur(jam_kerja);
       cout << endl;

  if (jam_kerja > 9){
    cout << "\nanda mendpatkan uang makan : " << uang_makan(1) << "\ntotal gaji anda : " << gaji_pokok + lembur(jam_kerja) + uang_makan(1);
    cout << endl;
  }
  if (jam_kerja > 10){
    cout << "\nanda meendapatkan uang transport : " << uang_transport (1) <<"\ntotal gaji anda : " << gaji_pokok + lembur(jam_kerja) + uang_makan(1) + uang_transport(1);
    cout << endl;
  }
  else {
    cout << "" << endl;
  }

  cout << "Ingin menghitung gaji anda lagi [y/n] ? ";
  cin >> input;
  cout << endl;
  if (input == 'y' || input == 'Y'){
    goto top;
  }
  else
    cout << " NIKMATI GAJI ANDA PEKERJA KERAS ";
}
}



double pokok (double x){
    double y;
    y= x * 7500;
    return y;
}
float lembur (float x){
    float y ;
    y = (x - 8) * 5000;
    return y;
}
float uang_makan(float x){
    x =10000;
    return x;
}
float uang_transport(float x){
    x = 13000;
    return x;
}
