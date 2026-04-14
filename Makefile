CC = cc
CFLAGS = -Wall -Wextra

SRC_DIR = src
BIN_DIR = bin

SRCS = $(wildcard $(SRC_DIR)/*.c)
BINS = $(SRCS:$(SRC_DIR)/%.c=$(BIN_DIR)/%)

.PHONY: all clean

all: $(BIN_DIR) $(BINS)

$(BIN_DIR):
	mkdir -p $(BIN_DIR)

$(BIN_DIR)/%: $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) -o $@ $<

clean:
	rm -rf $(BIN_DIR)
