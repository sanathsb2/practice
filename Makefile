all:
	gcc -o gcd gcd.c

cppcheck:
	cppcheck --enable=all gcd.c

valgrind:
	valgrind ./gcd
