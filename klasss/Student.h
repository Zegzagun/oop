#ifndef STUDENT_H
#define STUDENT_H

class Student
{
private:

   char name[10];
   int ocenki[6];

public:

  void vvod_imeni();
  void vivod_imeni();

  void vvod_ocenok();
  void vivod_ocenok();

  int stipendia();

Student()
{}

~Student()
{}

};

#endif // STUDENT_H
