/******************************
* Автор: Калинин А.А.         *
* Дата: 15.09.2023            *
* Название: Вариант номер 3   *
******************************/

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
  double Angle = 0.2443460952; /* The value is changed due to the fact
  that the sin(n) formula works for radians */
  int InitialSpeed = 750;
  double Gravity = 9.81;
  cout.precision(8);
  cout << "Flight time: " << 
  (2 * InitialSpeed * (sin(Angle))  ) / Gravity << endl;
  cout.precision(10);
  cout << "Max flight height: " <<
  ( (pow(InitialSpeed, 2) * pow(sin(Angle) , 2) ) / (2 * Gravity) ) << endl;
  cout.precision(11);
  cout << "Max flight range: " <<
  ( (pow(InitialSpeed, 2) * sin(2 * Angle) ) / Gravity ) << endl;
  cout << "Radius of curvature of the beginning of the trajectory: " <<
  pow(InitialSpeed, 2)  / (Gravity * cos(Angle) ) << endl;
    cout << "Radius of curvatureof the vertex of the trajectory: " <<
  ( (pow(InitialSpeed, 2) * pow(cos(Angle) , 2) ) / Gravity) << endl;

  return 0;
}
