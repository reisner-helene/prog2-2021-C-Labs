FILENAME = main.c
HEADER_OBJECT = temperature.o
OUT = main
COMPILER = gcc

# Rule to compute the main program while requiring the objects files
$(OUT) : $(FILENAME) $(HEADER_OBJECT)
	gcc $(FILENAME) $(HEADER_OBJECT) -o $(OUT)

# Explicit rule to compute the object file
# $(HEADER_OBJECT) : $(HEADER_SOURCE)
# 	gcc -c $(HEADER_SOURCE) -o $(HEADER_OBJECT)

# Implicit rule to compute the object file
%.o : %.c
	gcc -c $^ -o $@

run : $(OUT)
	 ./$(OUT)

debug : $(FILENAME) $(HEADER_OBJECT)
	gcc -g $(FILENAME) $(HEADER_OBJECT) -o $(OUT)
	gdb $(OUT)

clear :
	rm -f $(OUT) $(HEADER_OBJECT)

###################### HELPER #####################
# out.o: src.c src.h
#   $@   # "out.o" (target)
#   $<   # "src.c" (first prerequisite)
#   $^   # "src.c src.h" (all prerequisites)

# %.o : %.c
# 	gcc -c $^ -o $@


# Putting @ before a command allows to avoid printing it to the shell
