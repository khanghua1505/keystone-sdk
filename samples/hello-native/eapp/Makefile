CC = riscv64-unknown-linux-gnu-gcc
LD = riscv64-unknown-linux-gnu-ld

SDK_LIB_DIR = $(KEYSTONE_SDK_DIR)/bins

SDK_INCLUDE_DIR = $(KEYSTONE_SDK_DIR)/include

CFLAGS += -I$(SDK_INCLUDE_DIR) -Wall -Werror
LDFLAGS = -static -L$(SDK_LIB_DIR)

EAPP = eapp_native
OBJS = $(EAPP).o

all: $(EAPP)

$(EAPP): $(OBJS)
	$(LD) $(LDFLAGS) \
	-o $(EAPP) \
	$(OBJS) \
	$(SDK_LIB_DIR)/libkeystone-eapp.a \
	$(SDK_LIB_DIR)/libkeystone-edge.a \
	$(SDK_LIB_DIR)/libkeystone-glibc.a
	chmod -x $@

$(OBJS): %.o: %.c
	$(CC) $(CFLAGS) -c $<

clean:
	rm -f *.o $(APP_BIN) $(EXTRA_CLEAN)
