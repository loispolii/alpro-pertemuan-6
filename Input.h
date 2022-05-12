#include <iostream>
using namespace std;
class kuliah
{
friend istream operator >> (istream&, kuliah&);
friend ostream operator >> (ostream&, kuliah&);
public :
void input();
void proses();
void output();
private :
int jmlnilai,rtnilai,nim,bnyk,i,uts,uas,na,nt,nut,nua;
int nilai[10]; 
string nama,matkul;
};
void kuliah::input()
{
  cout << "Nama : "; getline (cin,nama);
  cout << "Mata Kuliah : "; getline (cin,matkul);
  cout << "NIM : ";cin>>nim;
  cout << "Daftar Nilai : "<<endl;
  cout << "Jumlah Nilai Tugas : ";cin>>bnyk;
}
