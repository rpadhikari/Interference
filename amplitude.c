double sin(double);

double amplitude(double a0, double omega, double t, double phase) {
//  double pi=3.1415926535898
  return a0*sin(omega*t + phase);

}
