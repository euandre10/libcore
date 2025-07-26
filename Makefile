# Makefile

# Dirs
inc_dir = include
src_dir = source
obj_dir = objects

# Compiler and flags
cc = clang
cflags = -I $(inc_dir) -Wall -Wextra -Werror -g

# Source and object files (exclui o main.c!)
sources = $(filter-out $(src_dir)/main.c, $(shell find $(src_dir) -name '*.c'))
objects = $(patsubst $(src_dir)/%.c, $(obj_dir)/%.o, $(sources))

# Biblioteca estática
lib = functions.a

# Alvo padrão: só gera a lib
all: $(lib)

# Gera a biblioteca a partir dos .o
$(lib): $(objects)
	ar rcs $@ $^

# Compila os .o individuais
$(obj_dir)/%.o: $(src_dir)/%.c
	@mkdir -p $(dir $@)
	$(cc) $(cflags) -c $< -o $@

# Mostrar arquivos (debug opcional)
print:
	@echo SOURCES = $(sources)
	@echo OBJECTS = $(objects)

# Limpeza
.PHONY: clean
clean:
	rm -rf $(obj_dir) 
