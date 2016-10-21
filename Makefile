CXX = g++ -std=c++11
CFLAGS = -c -g
INCLUDE = -I../include


main.exe: main.o Cempleado.o Csupervisor.o Cmesonero.o Cmesosuper.o 
	$(CXX) -o $@ $^ 

main.o: main.cpp 
	$(CXX) $(CFLAGS) $(INCLUDE) $< 

Cempleado.o: ../src/Cempleado.cpp
	$(CXX) $(CFLAGS) $(INCLUDE) $< 

Csupervisor.o: ../src/Csupervisor.cpp
	$(CXX) $(CFLAGS) $(INCLUDE) $< 

Cmesonero.o: ../src/Cmesonero.cpp
	$(CXX) $(CFLAGS) $(INCLUDE) $< 

Cmesosuper.o: ../src/Cmesosuper.cpp
	$(CXX) $(CFLAGS) $(INCLUDE) $< 


clean:
	$(RM) *.o  *.exe core
