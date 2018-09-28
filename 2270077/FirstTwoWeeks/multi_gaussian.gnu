set style line 1 \
linecolor rgb '#0060ad' \
linetype 1 linewidth 2 \
pointtype 7 pointsize 1.5
plot 'gaussian.dat' with linespoints linestyle 1
set term png
set output "multi_gauss.png"
replot
