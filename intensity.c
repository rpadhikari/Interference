//double amplitude(double, double, double);
double sin(double);
double intensity(double a0, double omega, double t, double phase) {
//  double pi=3.1415926535898
  return a0*a0*sin(omega*t + phase)*sin(omega*t + phase);

}

