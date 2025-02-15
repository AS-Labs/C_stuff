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
# sdl3 options
#CC_sdl3=-Wall -Werror -lSDL3 `pkg-config --cflags --libs sdl3`
#CC_sdl3_Debug=-Wall -Werror -lSDL3 -g `pkg-config --cflags --libs sdl3`
CC_sdl3=-Wall -Werror -lSDL3 -lSDL3_ttf `pkg-config --cflags --libs sdl3`
CC_sdl3_Debug=-Wall -Werror -lSDL3 -lSDL3_ttf -g `pkg-config --cflags --libs sdl3`


all:Build

Build:
	$(CC) $(CC_sdl3) -o $(EXEC) $(S_FILES)

build_run:Build
	$(EXEC)

build_debug:
	$(CC) $(CC_sdl3_Debug) -o $(EXEC_DEBUG) $(S_FILES)

clean:
	rm -rf $(B_DIR)/*
	rm -rf $(DEBUG_DIR)/*
