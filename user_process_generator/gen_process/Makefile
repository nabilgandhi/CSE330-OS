src = $(wildcard *.c)
obj = $(src:.c=.o)

LDFLAGS = -lpthread

user_process_generator: $(obj)
	$(CC) -o $@ $^ $(LDFLAGS)

.PHONY: clean
clean:
	rm -f $(obj) user_process_generator
