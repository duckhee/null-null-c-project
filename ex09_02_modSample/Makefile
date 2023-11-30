CC = gcc

SRCS = modSample.c

TARGET = ex09_modSample

BUILD_DIR = build

COBJS = $(addprefix $(BUILD_DIR)/, $(SRCS:.c=.o))

all: clean createdirs build

createdirs:
	$(shell mkdir ${BUILD_DIR})

build: $(COBJS)
	$(CC) -o $(BUILD_DIR)/$(TARGET) $^

$(COBJS): $(BUILD_DIR)/%.o : %.c
	$(CC) -o $@ -c $<

clean:
	$(shell rm -rf $(BUILD_DIR))

.PHONNY: clean createdirs build
.SUFFIXES: .c .o