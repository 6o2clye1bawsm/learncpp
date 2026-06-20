
CXX := clang++

CXXFLAGS := -std=c++26 -ggdb -g -O0 \
-fsanitize=address,undefined -fno-omit-frame-pointer \
-Werror -Wall -Weffc++ -Wextra -Wconversion \
-Wsign-conversion -pedantic-errors \
-fcolor-diagnostics -fansi-escape-codes

BUILD_DIR := build

# Get the filename from the command line
ARG := $(word 2,$(MAKECMDGOALS))
SRC := $(firstword $(wildcard $(ARG).cpp $(ARG)))

ifeq ($(SRC),)
$(error No source file found. Use: make run filename)
endif

NAME := $(basename $(notdir $(SRC)))
OUT := $(BUILD_DIR)/$(NAME)

.PHONY: all run clean $(ARG)

all: $(OUT)

$(OUT): $(SRC)
	@mkdir -p "$(BUILD_DIR)"
	$(CXX) $(CXXFLAGS) "$<" -o "$@"

run: all
	./"$(OUT)"

clean:
	rm -rf "$(BUILD_DIR)"

# Prevent make from treating the filename as a target
$(ARG):
	@:

