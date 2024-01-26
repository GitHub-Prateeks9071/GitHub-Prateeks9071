targetoutput: circle.o radius.o area.o		# make
	gcc -lpthread circle.c radius.c area.c  -o targetoutput

circle.o: circle.c radius.h area.h
	gcc -c circle.c

radius.o: radius.c radius.h
	gcc -c radius.c

area.o: area.c area.h
	gcc -c area.c

clean:		# make clean
	rm .o
run:		# make run
	./targetoutput