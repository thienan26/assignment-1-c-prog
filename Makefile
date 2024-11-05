CC = gcc
CFLAGS = -Wall -g
TARGET = test_program
SRCS = linked_list.c test_program.c
OBJS = $(SRCS:.c=.o)

ASAN ?= 0
ifeq ($(ASAN),1)
CFLAGS += -fsanitize=address
endif

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS) test_case.o

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)

check-%: $(TARGET)
	@echo "Running test case $*"
	@./$(TARGET) $*
	@echo "Test case $* passed"