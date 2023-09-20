/**********************************
* Автор: Калинин А.А.             *
* Дата: 15.09.2023                *
* Название: Вариант номер 3       *
* https://onlinegdb.com/1Ngggqaot *
**********************************/

#include <iostream>
#include <math.h>

using namespace std;

int main() {
  double angle = 0.2443460952; /* The value is changed due to the fact
  that the sin(n) formula works for radians */
  int initialSpeed = 750;
  double gravity = 9.81;
  double flightTime;
  double maxFlightHeight;
  double maxFlightRange;
  double trajectoryRadiusBegin;
  double trajectoryRadiusVertex;

  flightTime = (2 * initialSpeed * (sin(angle))) / gravity;
  maxFlightHeight = ((pow(initialSpeed, 2) * pow(sin(angle), 2)) / (2 * gravity));
  maxFlightRange = ((pow(initialSpeed, 2) * sin(2 * angle)) / gravity);
  trajectoryRadiusBegin = pow(initialSpeed, 2) / (gravity * cos(angle));
  trajectoryRadiusVertex = ((pow(initialSpeed, 2) * pow(cos(angle), 2)) / gravity);

  cout.precision(11);
  cout << "Flight time: " << flightTime << '\n'
	   << "Max flight height: " << maxFlightHeight << '\n'
	   << "Max flight range: " << maxFlightRange << '\n'
       << "Radius of curvature of the beginning of the trajectory: " << trajectoryRadiusBegin << '\n'
       << "Radius of curvature of the vertex of the trajectory: " << trajectoryRadiusVertex << endl;
  return 0;
}
