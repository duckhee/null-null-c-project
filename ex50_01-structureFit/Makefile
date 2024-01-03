CC = gcc

SRCS = structureFit.c

BUILD_DIR = build

TARGET = ex5001StructureFit

COBJS = $(addprefix $(BUILD_DIR)/, $(SRCS:.c=.o))

all: clean createdirs build

createdirs:
	$(shell mkdir ${BUILD_DIR})

build: $(COBJS)
	$(CC) -o $(BUILD_DIR)/$(TARGET) $^

$(COBJS): $(BUILD_DIR)/%.o : %.c
	$(CC) -o $@ -c $<

.PHONNY: clean createdirs build
.SUFFIXES: .c .o