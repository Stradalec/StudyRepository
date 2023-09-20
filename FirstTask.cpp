/**********************************
* Автор: Калинин А.А.             *
* Дата: 15.09.2023                *
* Название: Вариант номер 3       *
* https://onlinegdb.com/amHjaNO5f *
**********************************/

#include <iostream>
#include <math.h>

using namespace std;

int main() {
  int degree;
  double radian; /* The value is changed due to the fact
  that the sin(n) formula works for radians */
  int initialSpeed = 750;
  double gravity   = 9.81;
  double flightTime;
  double maxFlightHeight;
  double maxFlightRange;
  double trajectoryRadiusBegin;
  double trajectoryRadiusVertex;

  cout << "Angle = ";
  cin >> degree;

  radian                 = degree * (M_PI / 180);
  flightTime             = (2 * initialSpeed * ( sin(radian) ) ) / gravity; 
  maxFlightHeight        = ( (pow(initialSpeed, 2) * pow( sin(radian), 2) ) / (2 * gravity) );
  maxFlightRange         = ( (pow(initialSpeed, 2) * sin(2 * radian)) / gravity);
  trajectoryRadiusBegin  = pow(initialSpeed, 2) / (gravity * cos(radian) );
  trajectoryRadiusVertex = ( (pow(initialSpeed, 2) * pow( cos(radian), 2) ) / gravity);

  cout.precision(11);
  cout << "Flight time: "       << flightTime      << '\n'
       << "Max flight height: " << maxFlightHeight << '\n'
       << "Max flight range: "  << maxFlightRange  << '\n'
       << "Radius of curvature of a beginning of the trajectory: " << trajectoryRadiusBegin  << '\n'
       << "Radius of curvature of a vertex of the trajectory: "    << trajectoryRadiusVertex;
  return 0;
}
