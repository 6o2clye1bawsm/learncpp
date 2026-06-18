CXX := clang++

CXXFLAGS := -std=c++26 -ggdb -g -O0 \
	-fsanitize=address,undefined -fno-omit-frame-pointer \
	-Werror -Wall -Weffc++ -Wextra -Wconversion \
	-Wsign-conversion -pedantic-errors \
	-fcolor-diagnostics -fansi-escape-codes

BUILD_DIR := build

ifndef SRC
$(error No source file specified. Use: make run SRC=main.cpp)
endif

NAME := $(basename $(notdir $(SRC)))
OUT := $(BUILD_DIR)/$(NAME)

.PHONY: all run clean

all: $(OUT)

$(OUT): $(SRC)
	@mkdir -p "$(BUILD_DIR)"
	$(CXX) $(CXXFLAGS) "$<" -o "$@"

run: all
	./"$(OUT)"

clean:
	rm -rf "$(BUILD_DIR)"
