a.out: mainfactseries.o funfactseries.o
        gcc mainfactseries.o funfactseries.o -o a.out
mainfactseries.o: mainfactseries.c
        gcc -c mainfactseries.c
nfactseries.o: funfactseries.c
        gcc -c funfactseries.c
clean:
        rm -rf *.o
        rm -rf *.i
        rm -rf a.out
