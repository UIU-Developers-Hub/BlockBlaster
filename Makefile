# Define compiler and flags
CC = gcc
CFLAGS = -g

# Define include directories
INCLUDES = -I/opt/homebrew/Cellar/sdl2/2.30.3/include/SDL2 \
           -I/opt/homebrew/Cellar/sdl2_ttf/2.22.0/include/SDL2 \
           -I/opt/homebrew/Cellar/raylib/5.0/include

# Define library directories
LDFLAGS = -L/opt/homebrew/Cellar/sdl2/2.30.3/lib \
          -L/opt/homebrew/Cellar/sdl2_ttf/2.22.0/lib \
          -L/opt/homebrew/Cellar/raylib/5.0/lib

# Define libraries to link
LIBS = -lSDL2 -lSDL2_ttf -lSDL2main -lraylib -lm -ldl -lpthread

# Define the source file and the output executable
SRC = main.c
TARGET = main

# Rule to build the target
$(TARGET): $(SRC)
	$(CC) $(CFLAGS) $(INCLUDES) $(SRC) -o $(TARGET) $(LDFLAGS) $(LIBS)

# Rule to clean the build directory
clean:
	rm -f $(TARGET)
