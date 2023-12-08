CC = gcc

SRCS = ternaryOperator.c

BUILD_DIR = build

TARGET = TernaryOperator

COBJS = $(addprefix $(BUILD_DIR)/, $(SRCS:.c=.o))

CFLAGS = -g -Wall -Werror -std=gnu99

all: clean createdirs build

createdirs:
	$(shell mkdir ${BUILD_DIR})

build: $(COBJS)
	$(CC) $(CFLAGS) -o $(BUILD_DIR)/$(TARGET) $^

$(COBJS): $(BUILD_DIR)/%.o : %.c
	$(CC) $(CFLAGS) -o $@ -c $<

clean:
	$(shell rm -rf $(BUILD_DIR))

.SUFFIXES: .c .o
.PHONNY: clean createdirs build