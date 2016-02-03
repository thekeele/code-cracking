makemath:
	gcc find_sum.c -o find_sum
	gcc fib.c -o fib
	gcc fact_rec.c -o fact_rec
	gcc fact_iter.c -o fact_iter
	as -m32 fact_ass.s -o fact_ass.o
	gcc -m32 fact_ass.o -o fact_ass
clean:
	   rm -f find_sum
	   rm -f fib
	   rm -f fact_rec
	   rm -f fact_iter
	   rm -f fact_ass.o
	   rm -f fact_ass
