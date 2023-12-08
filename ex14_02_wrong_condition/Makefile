CC = gcc

SRCS = wrongConditional.c

BUILD_DIR = build

TARGET = wrongConditional

COBJS = $(addprefix $(BUILD_DIR)/, $(SRCS:.c=.o))

all: clean createdirs build

createdirs:
	$(shell mkdir ${BUILD_DIR})

build: $(COBJS)
	$(CC) -o $(BUILD_DIR)/$(TARGET) $^

$(COBJS): $(BUILD_DIR)/%.o : %.c
	$(CC) -$@ -c $<

clean:
	$(shell rm -rf $(BUILD_DIR))

.PHONNY: clean createdirs build
.SUFFIXES: .c .o
