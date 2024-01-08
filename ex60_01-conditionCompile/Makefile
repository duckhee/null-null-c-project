CC = gcc

SRCS = conditionCompile.c

BUILD_DIR = build

TARGET = ex6001ConditionCompile

C_HEADER =

C_INC = $(patsubst %,-I%, $(C_HEADER))

COBJS = $(addprefix $(BUILD_DIR)/, $(SRCS:.c=.o))

all: clean createdirs build

createdirs:
	$(shell mkdir ${BUILD_DIR})

build: $(COBJS)
	$(CC) $(C_INC) -o $@ -c $<

$(COBJS): $(BUILD_DIR)/%.o : %.c
	$(CC) $(C_INC) -o $@ -c $<

clean:
	$(shell rm -rf ${BUILD_DIR})

.SUFFIXES: .c .o
.PHONNY: clean createdirs build