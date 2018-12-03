CC=g++
CFLAGS=-I.
BUILDDIR=build

all: dir soru1 soru2

dir:
	mkdir -p $(BUILDDIR)

soru1: soru1.cpp
	$(CC) -o $(BUILDDIR)/soru1 soru1.cpp

soru2: soru2.cpp
	$(CC) -o $(BUILDDIR)/soru2 soru2.cpp

.PHONY: clean

clean:
	rm -f soru1 soru2

