
#include <iostream>
using namespace std;
void kuliah::proses()
{
  jmlnilai= 0;
  for (i=0;i<bnyk;i++)
      {
      cout<<"Masukan Nilai Tugas Ke-"<<i+1<<" = ";cin>>nilai[i];
      jmlnilai = jmlnilai + nilai[i];
    }
  cout<<"Masukan Nilai UTS : ";cin>>uts;
  cout<<"Masukan Nilai UAS : ";cin>>uas;
  nt = jmlnilai / bnyk * 0.2;
  jmlnilai = jmlnilai + uts + uas;
  nut = uts * 0.35;
  nua = uts * 0.45;
  na = nt + nut + nua;
  rtnilai = (jmlnilai / (bnyk + 2));
}
