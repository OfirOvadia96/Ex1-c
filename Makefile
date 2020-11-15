FLAGS = -Wall -g
CC = gcc #if we want to change compiler


all: mymaths mymathd mains maind

#create static lib
mymaths: power.o basicMath.o
	ar -rcs libmyMath.a power.o basicMath.o

#create dynamic lib
mymathd: power.o basicMath.o
	 $(CC) -shared -o libmyMath.so power.o basicMath.o
	 
power.o: power.c myMath.h
	$(CC) $(FLAGS) -c power.c

basicMath.o: basicMath.c myMath.h
	$(CC) $(FLAGS) -c basicMath.c

#static
mains: main.o mymaths
	$(CC) $(FLAGS) -o mains main.o libmyMath.a

#dynamic
maind: main.o mymathd
	$(CC) $(FLAGS) -o maind main.o ./libmyMath.so

main.o: main.c myMath.h
	$(CC) $(FLAGS) -c main.c

.PHONY:clean all

clean:
	rm -f *.o *.a *.so mains maind
