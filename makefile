CFLAGS = -std=c++11 -g -O0 -I ../libraries/
COMPILER = g++

cc: main.o graph.o graph_dyn.o reading.o shiloach_dyn.o shiloach_hw.o shiloach_sw.o
	$(COMPILER) -o cc main.o graph.o graph_dyn.o reading.o shiloach_dyn.o shiloach_hw.o shiloach_sw.o $(CFLAGS)

main.o: main.cpp shiloach.h shiloach_dynamic.h graph.h graph_dyn.h reading.h
	$(COMPILER) -c main.cpp $(CFLAGS)
graph.o: graph.cpp graph.h
	$(COMPILER) -c graph.cpp $(CFLAGS)
graph_dyn.o: graph_dyn.cpp graph_dyn.h
	$(COMPILER) -c graph_dyn.cpp $(CFLAGS)
reading.o: reading.cpp reading.h
	$(COMPILER) -c reading.cpp $(CFLAGS)
shiloach_dyn.o: shiloach_dyn.cpp shiloach_dynamic.h
	$(COMPILER) -c shiloach_dyn.cpp $(CFLAGS)
shiloach_hw.o: shiloach_hw.cpp shiloach.h
	$(COMPILER) -c shiloach_hw.cpp $(CFLAGS)
shiloach_sw.o: shiloach_sw.cpp shiloach.h
	$(COMPILER) -c shiloach_sw.cpp $(CFLAGS)
clean:
	rm cc *.o
