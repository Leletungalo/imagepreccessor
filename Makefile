imageops: image.o iterator.o imageops.o
	g++ imageops.o iterator.o image.o -o imageops

image.o: image.cpp
	g++ -c image.cpp

iterator.o: iterator.cpp
	g++ -c iterator.cpp

imageops.o: imageops.cpp
	g++ -c imageops.cpp
run:
	./imageops -a Lennastandard.pgm lele.txt okdoff.txt
clean:
	rm *.o imageops
