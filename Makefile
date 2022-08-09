all: a.out

a.out: tests.cpp recursionLab.h
	g++ -std=c++11 tests.cpp

test: a.out
	./a.out "$(try)"

clean:
	rm a.out
	rm b.out

b.out: demo.cpp recursionLab.h
	g++ -std=c++11 demo.cpp -o b.out

demo: b.out
	./b.out


