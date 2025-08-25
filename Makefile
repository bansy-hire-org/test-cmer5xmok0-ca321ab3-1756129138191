CC = gcc
CFLAGS = -Wall -Werror -g -std=c99 -O0  # Enable debugging

SRCS = src/main.c src/sensor.c src/ble.c src/processing.c src/power.c src/error.c
OBJS = $(SRCS:.c=.o)

TARGET = glucose_monitor

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(TARGET)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)

run:
	./$(TARGET)

test:
	gcc -Wall -Werror -g -std=c99 test/test_processing.c src/processing.c -o test_processing && ./test_processing

format:
	clang-format -i src/*.c src/*.h test/*.c
