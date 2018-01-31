COMPILER=g++
INC_DIR=../libraries
CFLAGS = -std=c++11 -c -O0 -Wall -I$(INC_DIR)

cc: main.o graph.o graph_dyn.o reading.o shiloach_dyn.o shiloach_hw.o shiloach_sw.o
	$(COMPILER) cc -o *.ο

%.o: %.cpp
	$(COMPILER) -c $@ $< $(CFLAGS)

clean:
	rm -rf *.o cc
