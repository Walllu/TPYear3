set key autotitle columnheader
stats 'multig.dat' using 0 nooutput
plot for [i=0:(STATS_blocks - 1)] 'multig.dat' using 1:2 index i
set term png
set output "multi_gaussian.png"
replot
