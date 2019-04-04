#include <iostream>
#include "Student.h"

using namespace std;

int main()
{ int n;
  cout << "Skolko studentov?" << endl;
  cin >> n;

Student stud[n];

for (int i=0;i<n;i++)
 { stud[i].vvod_imeni();
   stud[i].vvod_ocenok();}

 //////////////////////

cout << " Studenti so stipendiey: ";

for (int j=0;j<n;j++)
 { if (stud[j].stipendia()==1)
    { cout << "("; stud[j].vivod_imeni(); cout << ")";}}

return 0;
}
