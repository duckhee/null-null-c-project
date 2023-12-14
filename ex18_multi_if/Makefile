CC = gcc

SRCS = multiIf.c

TARGET = multiIf

BUILD_DIR = build

COBJS = $(addprefix $(BUILD_DIR))

all: clean createdirs build

createdirs:
	$(Shell mkdir ${BUILD_DIR})

build: $(COBJS)
	$(CC) -o $(BUILD_DIR)/$(TARGET) $^

$(COBJS): $(BUILD_DIR)/%.o : %.c
	$(CC) -o $@ -c $<

clean:
	$(shell rm -rf ${BUILD_DIR})

.SUFFIXES: .c .o
.PHONNY: clean createdirs build