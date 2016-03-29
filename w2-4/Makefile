EXEC = test

SRCS = main.c */*.c

HEADER = header.h

all: $(EXEC)

$(EXEC):
	@gcc -o $(EXEC) $(SRCS) -std=c99 -lm -Iheaders/

clean:
	rm -f $(EXEC)

re: clean $(EXEC)
