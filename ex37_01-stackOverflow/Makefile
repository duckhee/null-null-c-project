CC = gcc

SRCS = stackOverflow.c

BUILD_DIR = buildDir

TARGET = ex3701StackOverflow

COBJS = $(addprefix $(BUILD_DIR)/, $(SRCS:.c=.o))

# stack 크기를 변경하기 위한 옵션 => stack-size=
#C_FLAGS = -Wl,-z,stack-size=4194304 # call stack change 4MB
C_FLAGS = -Wall,-z,--stack,4194304


all: clean createdirs build

createdirs:
	$(shell mkdir ${BUILD_DIR})

build: $(COBJS)
	$(CC) $(C_FLAGS) -o $(BUILD_DIR)/$(TARGET) $^

$(COBJS): $(BUILD_DIR)/%.o : %.c
	$(CC) $(C_FLAGS) -o $@ -c $<

clean:
	$(shell rm -rf ${BUILD_DIR})

.SUFFIXES: .c .o
.PHONNY: clean createdirs build