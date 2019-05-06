#include <iostream>
#include <fstream>

using namespace std;

int main()
{char AAA[128];

cout << " Vvedite predlojenie: \n";
cin.getline(AAA, 128);

ofstream out;
out.open("fileyniy.txt");
if (out.is_open())
{out << AAA << endl;}

cout << "\n End" << endl;

return 0;
}
