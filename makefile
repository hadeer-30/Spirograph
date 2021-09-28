GPP = g++
all: spiro
spiro:
	${GPP} -o points generate_points.cpp
	$ ./points
	$ ./jgraph -P spiro.jgr | ps2pdf - | convert -density 300 - -quality 100 spiro_1.pdf 
	$ ./points 144 2 64 1 0 0
	$ ./jgraph -P spiro.jgr | ps2pdf - | convert -density 300 - -quality 100 spiro_2.pdf
	$ ./points 5 1 4 0 1 0.5
	$ ./jgraph -P spiro.jgr | ps2pdf - | convert -density 300 - -quality 100 spiro_3.pdf
	$ ./points 50 4 25  1 0 1
	$ ./jgraph -P spiro.jgr | ps2pdf - | convert -density 300 - -quality 100 spiro_4.pdf
	$ ./points 10 1 0.5 0 1 0
	$ ./jgraph -P spiro.jgr | ps2pdf - | convert -density 300 - -quality 100 spiro_5.pdf
	$ ./points 50 30 25 1 0 1
	$ ./jgraph -P spiro.jgr | ps2pdf - | convert -density 300 - -quality 100 spiro_6.pdf
	$ ./points 90 10 10 0 1 1
	$ ./jgraph -P spiro.jgr | ps2pdf - | convert -density 300 - -quality 100 spiro_7.pdf
	$ ./points 90 2 -80 0 1 1
	$ ./jgraph -P spiro.jgr | ps2pdf - | convert -density 300 - -quality 100 spiro_8.pdf
