# Directories
S_DIR=source
B_DIR=build
DEBUG_DIR=debug

# Files
S_FILES=$(S_DIR)/main.cpp

# Output
EXEC=$(B_DIR)/main.app
EXEC_DEBUG=$(DEBUG_DIR)/main.app

# Build settings
CC=g++
# RAYLIB options
#CC_RAYLIB=-lRAYLIB `sdl-config --cflags --libs`
CC_RAYLIB=-Wall -lraylib
CC_RAYLIB_Debug=-Wall -lraylib -g


all:Build

Build:
	$(CC) $(CC_RAYLIB) -o $(EXEC) $(S_FILES)

build_run:Build
	$(EXEC)

build_debug:
	$(CC) $(CC_RAYLIB_Debug) -o $(EXEC_DEBUG) $(S_FILES)

clean:
	rm -rf $(B_DIR)/*
	rm -rf $(DEBUG_DIR)/*
