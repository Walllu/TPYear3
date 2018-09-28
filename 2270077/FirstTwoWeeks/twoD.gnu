set title "2D heat map multivariable gaussian"
unset key
set tic scale 0
set palette rgbformula 21,22,23
set xrange [0:150]
set yrange [0:150]
plot 'output.dat' using 2:1:3 with image
set term png
set output "twoD.png"
replot
