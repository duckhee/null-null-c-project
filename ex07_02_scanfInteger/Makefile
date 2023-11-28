CC = gcc

SRCS = scanfInteger.c

TARGET = ScanfInteger

BUILD_DIR = build

COBJS = $(addprefix $(BUILD_DIR)/, $(SRCS:.c=.o))

all: clean createdirs build

createdirs:
	$(shell mkdir ${BUILD_DIR})

build: $(COBJS)
	$(CC) -o $(BUILD_DIR)/$(TARGET) $^

$(COBJS): $(BUILD_DIR)/%.o : %.c
	$(CC) -o $@ -c $<

.SUFFIXES: .c .o
.PHONNY: clean createdirs build