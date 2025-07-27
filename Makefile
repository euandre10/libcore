# Makefile

# VARS
inc_dir = include
src_dir = source
obj_dir = objects
lib_dir = lib

# Compiler and flags
cc = clang
cflags = -I $(inc_dir) -Wall -Wextra -Werror -g
sources = $(filter-out $(src_dir)/main.c, $(shell find $(src_dir) -name '*.c'))
objects = $(patsubst $(src_dir)/%.c, $(obj_dir)/%.o, $(sources))
lib = $(lib_dir)/functions.a

all: $(lib)

$(lib): $(objects)
	@mkdir -p $(lib_dir)
	@ar rcs lib/functions.a objects/*/*.o

$(obj_dir)/%.o: $(src_dir)/%.c
	@mkdir -p $(dir $@)
	@$(cc) $(cflags) -c $< -o $@

.PHONY: clean
clean:
	rm -rf $(obj_dir) 
