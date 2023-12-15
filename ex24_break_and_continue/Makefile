CC = gcc

SRCS = breakAndContinue.c

BUILD_DIR = build

TARGET = ex24_BreakAndContinue

COBJS = $(addprefix $(BUILD_DIR)/, $(SRCS:.c=.o))

all: clean createdirs build

createdirs:
	$(shell mkdir ${BUILD_DIR})

build: $(COBJS)
	$(CC) -o $(BUILD_DIR)/$(TARGET) $^

$(COBJS): $(BUILD_DIR)
	$(CC) -o $(BUILD_DIR)/$(TARGET) $^

clean:
	$(shell rm -rf ${BUILD_DIR})

.SUFFIXES: .c .o
.PHONNY: clean createdirs build
