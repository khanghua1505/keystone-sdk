CC = riscv64-unknown-linux-gnu-g++
LD = riscv64-unknown-linux-gnu-ld

SDK_LIB_DIR =$(KEYSTONE_SDK_DIR)/bins

SDK_INCLUDE_DIR = $(SDK_LIB_DIR)/include

CCFLAGS = -I$(SDK_INCLUDE_DIR) -std=c++11 -Wall -Werror
LDFLAGS = -L$(SDK_LIB_DIR)

HOST = host_native
OBJS = $(HOST).o

all: $(HOST)

$(HOST):
	$(CC) $(LDFLAGS) $(CCFLAGS) \
	-o $(HOST) \
	$(HOST).cpp \
	$(SDK_LIB_DIR)/libkeystone-host.a \
	$(SDK_LIB_DIR)/libkeystone-edge.a

clean:
	rm -f *.o $(HOST)
