![Alt text for your image](https://i.ibb.co/t3RK0Gf/Screenshot-2024-07-13-at-6-23-51-PM.png)


<div align="center">
  <img src="https://i.imgur.com/9xXbkxt.jpeg", width="250" />
  <img src="https://i.imgur.com/u7LlFWk.jpeg" width="250" />
  <img src="https://i.imgur.com/pUUEM1p.jpeg" width="250" />
</div>



# BlockBlaster

BlockBlaster is a classic breakout-style game built using SDL2 and Raylib. The objective is to break all the blocks by bouncing a ball with a paddle. This project demonstrates the use of graphics libraries in C to create a fun and interactive game.

## Features

- Classic breakout gameplay
- Simple and intuitive controls
- Graphics powered by SDL2 and Raylib

## Requirements

- C Compiler (GCC recommended)
- SDL2
- Raylib

## Installation

### Step 1: Install SDL2

#### On Linux (Ubuntu/Debian)

```sh
sudo apt-get update
sudo apt-get install libsdl2-dev
```

#### On macOS

```sh
brew install sdl2
```

#### On Windows

Download the SDL2 development libraries from the [SDL2 website](https://www.libsdl.org/download-2.0.php) and follow the installation instructions for your specific development environment.

### Step 2: Install Raylib

#### On Linux (Ubuntu/Debian)

```sh
sudo apt-get install build-essential
sudo apt-get install libgl1-mesa-dev libgles2-mesa-dev
git clone https://github.com/raysan5/raylib.git
cd raylib/src
make
sudo make install
```

#### On macOS

```sh
brew install raylib
```

#### On Windows

Download the Raylib development libraries from the [Raylib website](https://www.raylib.com/) and follow the installation instructions for your specific development environment.

## Building the Project

1. Clone the repository:

```sh
git clone https://github.com/yourusername/BlockBlaster.git
cd BlockBlaster
```

2. Compile the project:

```sh
gcc -o BlockBlaster main.c -lSDL2 -lraylib -lm
```

3. Run the executable:

```sh
./BlockBlaster
```

## Gameplay Instructions

- Use the left and right arrow keys to move the paddle.
- Break all the blocks by bouncing the ball with the paddle.
- Try not to let the ball fall off the bottom of the screen!

## Contributing

Contributions are welcome! Feel free to open issues or submit pull requests.

## License

This project is licensed under the MIT License.

## Acknowledgments

- Thanks to the SDL2 and Raylib developers for their excellent libraries.
- Inspired by the classic arcade game Breakout.

## Contact

For any questions or suggestions, please open an issue or contact me at arahaman2330455@bscse.uiu.ac.bd

---

Enjoy playing BlockBlaster!
