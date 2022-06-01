#include<stdio.h>
#include<math.h>
  FILE *outfile1, *outfile2;
// This program computes the amplitude and intensity of waves
// for various educational purposes
// Author: Rajendra Adhikari
// Kathmandu University, Date: May 30th, 2022

int main() {
  double amplitude(double, double, double, double);
  double intensity(double, double, double, double);
  int i;
  double pi=3.1415926535898;
//  fprintf(outfile,"Time    Amplitude     Intensity\n");
  double a0, omega, phase1, phase2, t; 
  // amplitude, angulae frequency, phase angles and the time
  outfile1 = fopen("amplitude.dat", "w");
  outfile2 = fopen("intensity.dat", "w");
  omega = 1.0;
  phase1 = 0.0;
  phase2 = 4.0*pi;
  a0=2.0;
  for(i=0; i<=6283; i++) {
    t=0.0025*(double)i;
    fprintf(outfile1,"%8.4lf %12.6lf %12.6lf\n", t, amplitude(a0, omega, t, phase1), amplitude(a0, omega, t, phase2));
  }
  fclose(outfile1);
  fclose(outfile2);
}

