CXX = g++ -std=c++11
CFLAGS = -c 
INCLUDE = 


main.exe: main.o Cempleado.o Csupervisor.o Cmesonero.o Cmesosuper.o 
	$(CXX) -o $@ $^ 

main.o: main.cpp 
	$(CXX) $(CFLAGS) -I. $< 

Cempleado.o: Cempleado.cpp
	$(CXX) $(CFLAGS) -I. $< 

Csupervisor.o: Csupervisor.cpp
	$(CXX) $(CFLAGS) -I. $< 

Cmesonero.o: Cmesonero.cpp
	$(CXX) $(CFLAGS) -I. $< 

Cmesosuper.o: ../src/Cmesosuper.cpp
	$(CXX) $(CFLAGS) -I. $< 


clean:
	$(RM) *.o  *.exe core
