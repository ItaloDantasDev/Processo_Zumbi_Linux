bin: fimd_Zprocess.c
	gcc fimd_Zprocess.c -o bin

run: bin
	./bin
clean:
	rm bin
