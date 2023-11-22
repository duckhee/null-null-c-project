CC = gcc

SRCS = hello.c

TARGET = ex_01_hello_world

BUILD_DIR = buildDir

COBJS = $(addprefix $(BUILD_DIR)/, $(SRCS:.c=.o))


all: clean createdirs build

createdirs:
	$(shell mkdir ${BUILD_DIR})

$(COBJS): $(BUILD_DIR)/%.o : %.c
	$(CC) -o $@ -c $<

build: $(COBJS)
	$(CC) -o $(BUILD_DIR)/$(TARGET) $^

clean:
	rm -rf ${BUILD_DIR}

.PHONNY: clean createdirs build
.SUFFIXES: .cpp .o