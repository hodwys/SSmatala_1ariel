CC = gcc
AR = ar
FLAGS = -Wall -g
LL = basicClassification.o advancedClassificationLoop.o
LR = basicClassification.o advancedClassificationRecursion.o 

all: loops recursived recursives loopd mains maindloop maindrec

# make loops
loops: libclassloops.a
libclassloops.a : $(LL)
	$(AR) -rcs libclassloops.a $(LL)
basicClassification.o: basicClassification.c NumClass.h
	$(CC) $(FLAGS) -c basicClassification.c
advancedClassificationLoop.o: advancedClassificationLoop.c NumClass.h 
	$(CC) $(FLAGS) -c advancedClassificationLoop.c
advancedClassificationRecursion.o: advancedClassificationRecursion.c NumClass.h 
	$(CC) $(FLAGS) -c advancedClassificationRecursion.c

# make loopd
loopd: libclassloops.so

libclassloops.so: $(LL)
	$(CC) -shared -fPIC -o libclassloops.so $(LL)

# make recursives
recursives: libclassrec.a
libclassrec.a : $(LR)
	$(AR) -rcs libclassrec.a $(LR) 

# make recursived
recursived: libclassrec.so
libclassrec.so: $(LR)
	$(CC) -shared -fPIC -o libclassrec.so $(LR) -lm

#make mains
mains: main.o libclassrec.a
	$(CC) $(FLAGS) -o mains main.o libclassrec.a -lm

# make maindrec
maindrec: main.o libclassrec.so
	$(CC) $(FLAGS) -o maindrec main.o ./libclassrec.so -lm

#  make maindloop
maindloop: main.o libclassloops.so
	$(CC) $(FLAGS) -o maindloop main.o ./libclassloops.so -lm

# clean
clean: 
	rm -f *.o *.a *.so mains maindloop maindrec

# make main.o
main.o: main.c NumClass.h
	$(CC) $(FLAGS) -c main.c -lm