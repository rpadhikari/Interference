set term postscript enhanced color 'Helvetica-Bold, 22'
set output 'wave.ps'
set xl 'Omege * t'

set style line 1 lt 1 lw 1 lc rgb 'red'
set style line 2 lt 1 lw 4 lc rgb 'black'

plot 'amplitude.dat' u 1:2 w l ti 'Wave1' ls 2,\
 '' u 1:3 w l ti 'Wave2' ls 1
#     'out.dat' u 1:3 w l ti 'Intensity' ls 1

set output
! ps2pdf wave.ps
! rm wave.ps

