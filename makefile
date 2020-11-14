CC =gcc
AR =ar
OBJECTS_MAIN= main.o
OBJECTS_LIB=myMath.o
OBJECTS_LIB2=power.o basicMath.o
FLAGS=-Wall -g
all: myMathd myMaths mains maind
mains: $(OBJECTS_MAIN) myMaths
	$(CC) $(FLAGS) -o mains $(OBJECTS_MAIN) libmyMath.a
maind: $(OBJECTS_MAIN) myMathd
	$(CC) $(FLAGS) -o maind $(OBJECTS_MAIN) ./libmyMath.so
myMathd: $(OBJECTS_LIB)
	$(CC) -shared -o libmyMath.so $(OBJECTS_LIB2)
myMaths: $(OBJECTS_LIB)
	$(AR) -rcs libmyMath.a $(OBJECTS_LIB2)
myMath.o: basicMath.c power.c myMath.h
	$(CC) $(FLAGS) -c power.c basicMath.c
main.o: main.c myMath.h
	$(CC) $(FLAGS) -c main.c
.PHONY: Clean all
clean:
	rm -f *.o *.a *.so maind mains
