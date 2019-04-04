#include <iostream>
#include "Student.h"
#include <stdlib.h>

using namespace std;

void Student::vvod_imeni()
{ cout << " Vvedite name: ";
    cin >> this -> name;
}

void Student::vivod_imeni()
{ cout << this -> name;}

/////////////////////////////

void Student::vvod_ocenok()
{ cout << " \n Vvedite ocenki: ";
    for(int i=0;i<6;i++)
      { zanovo:
          cin >> this -> ocenki[i];
          if (!(this -> ocenki[i]>=2 && this -> ocenki[i]<=5))
            { cout << " Tak nelzya \n"; goto zanovo;}
      }
}

void Student::vivod_ocenok()
{ cout << " Ocenki: ";
    for(int i=0;i<6;i++)
      {cout << "[" << this -> ocenki[i] << "]";}
}

/////////////////////////////

int Student::stipendia()
{ int s=1;
    for(int i=0;i<6;i++)
      { if((this -> ocenki[i]==3)||(this -> ocenki[i]==2))
         {s=0; break;}}
  //if (s==1) {cout << " Stipendia Est. \n"; }
  //if (s==0) {cout << " Stipendii Net. \n"; }

return s;
}
