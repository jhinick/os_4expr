target = expr
std = -std=c99 
debug = -g
$(target): main.o cal.o
	gcc main.o cal.o -o $(target) $(debug) $(std)
main.o: main.c
	gcc -c main.c
cal.o: cal.c
	gcc -c cal.c
