set term png
set title "Chaos in Hassell's Blowfly Equation"
set xlabel "b parameter"
set ylabel "population cycle after 100 generations"
set yrange [0:18]

plot "blowfly.dat" using 1:2 with dots
