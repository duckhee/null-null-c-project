CC = gcc

SRCS = struct.c

BUILD_DIR = build

TARGET = ex4602Structure

COBJS = $(addprefix $(BUILD_DIR)/, $(SRCS:.c=.o))

all: clean cratedirs build

createdirs:
	$(shell mkdir ${BUILD_DIR})

build: $(COBJS)
	$(CC) -o $(BUILD_DIR)/$(TARGET) $^

$(COBJS): $(BUILD_DIR)/%.o : %.c
	$(CC) -o $@ -c $<

clean:
	$(shell rm -rf ${BUILD_DIR})

.SUFFIXES: .c .o
.PHONNY: clean createdirs build