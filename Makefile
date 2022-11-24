CC=gcc
RECORSERS= basicClassification.o advancedClassificationRecursion.o
LOOPERS= basicClassification.o advancedClassificationLoop.o 
AR=ar
FLAGS= -Wall -g


all: loops recursived recursives loopd mains maindloop maindrec

loops: libclassloops.a
recursives: libclassrec.a
loopd: libclassloops.so
recursived: libclassrec.so

libclassloops.a: $(LOOPERS)
	$(AR) -rcs libclassloops.a $(LOOPERS)
libclassrec.a: $(RECORSERS)
	$(AR) -rcs libclassrec.a $(RECORSERS)




basicClassification.o: basicClassification.c NumClass.h
	$(CC) $(FLAGS) -c basicClassification.c
advancedClassificationLoop.o: advancedClassificationLoop.c NumClass.h
	$(CC) $(FLAGS) -c advancedClassificationLoop.c
advancedClassificationRecursion.o: advancedClassificationRecursion.c NumClass.h
	$(CC) $(FLAGS) -c advancedClassificationRecursion.c



libclassloops.so: $(LOOPERS)
	$(CC) -shared -fPIC -o libclassloops.so $(LOOPERS)
libclassrec.so: $(RECORSERS)
	$(CC) -shared -fPIC -o libclassrec.so $(RECORSERS)

mains: main.o libclassrec.a
	$(CC) $(FLAGS) -o mains main.o libclassrec.a -lm
maindloop: main.o libclassloops.so
	$(CC) $(FLAGS) -o maindloop main.o ./libclassloops.so -lm
maindrec: main.o libclassrec.so
	$(CC) $(FLAGS) -o maindrec main.o ./libclassrec.so -lm
main.o: main.c NumClass.h
	$(CC) $(FLAGS) -c main.c -lm

.PHONY: clean all

clean: 
	rm -f  *.o *.a *.so mains maindloop maindrec

	
