# Spirograph
Submitted by: Hadeer Farahat

This program produces a spirograph according to the equations provided in Wikipedia.

If you run `$make`, it will produce some spirographs in PDF format.

If you want to provide different data for `R (outer circle radius), r(inner circle radius) , distance p ,and color as RGB values (optional)`:
First run `$ ./points <R> <r> <p>` (with default black color) or `$ ./points <R> <r> <p> < 3 values for RGB>` to specify a different color 
this will produce the points of the graph.
Then run, `$ ./jgraph -P spiro.jgr | ps2pdf - | convert -density 300 - -quality 100 spiro_x.pdf` to run Jgraph from the resulted points.
