FILENAME = main.c
OUT = main

$(OUT) : $(FILENAME)
	gcc $(FILENAME) -o $(OUT)

run : $(OUT)
	./$(OUT)

debug : $(FILENAME)
	gcc -g $(FILENAME) -o $(OUT)
	gdb $(OUT)

clear :
	rm -f $(OUT)
