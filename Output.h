#include <iostream>
using namespace std;
void kuliah::output(){
  cout<<endl;
  cout << "nama anda : " << nama << endl;
  cout << "mata kuliah : " << matkul << endl;
  cout << "NIM : " << nim << endl;
  for (i=0;i<bnyk;i++)
    {
      cout<<"Nilai Tugas Ke-"<<i+1<<" : "<<nilai[i]<<endl;
    }
  cout << "UTS : " << uts << endl;
  cout << "UAS : " << uas << endl;
  cout << "Nilai Akhir : " << na <<endl;
  cout << "nilai rata rata :" << rtnilai << endl ;
}
  