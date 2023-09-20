/**********************************
* Автор: Калинин А.А.             *
* Дата: 15.09.2023                *
* Название: Вариант номер 3       *
* https://onlinegdb.com/5oIoNqDLC *
**********************************/

#include <iostream>
#include <math.h>

using namespace std;

int main() {
  double angle = 0.2443460952; /* The value is changed due to the fact
  that the sin(n) formula works for radians */
  int initialSpeed = 750;
  double gravity = 9.81;
  cout.precision(8);
  double flightTime = (2 * initialSpeed * (sin(angle))) / gravity;
  cout << "Flight time: " << flightTime << endl;
  cout.precision(10);
  double maxFlightHeight = ((pow(initialSpeed, 2) * pow(sin(angle), 2)) / (2 * gravity));
  cout << "Max flight height: " << maxFlightHeight << endl;
  cout.precision(11);
  double maxFlightRange = ((pow(initialSpeed, 2) * sin(2 * angle)) / gravity);
  cout << "Max flight range: " << maxFlightRange << endl;
  double trajectoryRadiusBegin = pow(initialSpeed, 2) / (gravity * cos(angle));
  cout << "Radius of curvature of the beginning of the trajectory: " << trajectoryRadiusBegin << endl;
  double trajectoryRadiusVertex = ((pow(initialSpeed, 2) * pow(cos(angle), 2)) / gravity);
  cout << "Radius of curvature of the vertex of the trajectory: " << trajectoryRadiusVertex << endl;
  return 0;
}
