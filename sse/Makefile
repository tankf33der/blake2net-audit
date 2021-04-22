all:
	gcc -O3 *.c && ./a.out
	gcc -O3 -mavx *.c && ./a.out
	gcc -O3 -mavx2 *.c && ./a.out
	gcc -O3 -msse2 *.c && ./a.out
	gcc -O3 -msse4 *.c && ./a.out
clean:
	rm -rf *.o *.out

