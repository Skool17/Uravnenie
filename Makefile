.PHONY: clean all test 
CFLAGS = -Wall -Werror -MP -MMD 

all: bin/Sq.exe 

bin/Sq.exe: build/Osnova.o build/procedure.o 
	gcc $(CFLAGS) build/Osnova.o build/procedure.o -o bin/Sq.exe -lm

build/Osnova.o: src/Osnova.cpp src/procedure.h
	gcc $(CFLAGS) -c src/Osnova.cpp -o build/procedure.o -lm

build/procedure.o: src/procedure.cpp src/procedure.h 
	gcc $(CFLAGS) -c src/procedure.cpp -o build/procedure.o -lm

clean:
	@echo "Cleaning files in build directory" 	
	@rm -rf build/*.d build/*.o 
	@echo "Cleaning binaries"
	@rm -rf bin/Sq.exe 
	@echo "All files have been cleaned."	

-include build/*.d
