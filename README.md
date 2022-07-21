<h1 align="center">TinnyDuck</h1>

Attiny85 is a small and cheap microcontroller commonly used to replace the RubberDuck pentest tool when performing exploitation training or even phisycal pentest. The microcontroller board is an 8bit AVR with a focus on building IoT (Internet of Things) systems, but it becomes very malleable by the wide programming possibilities, so building a system for command injection becomes a very simple and intuitive task.

We can program it using the `DigiKeyboard.h` library that will simulate a keyboard and execute key codes to build the interaction, so it is possible to execute a sequence of commands like open a new shell and in seconds, download a reverse shell and run it to gain access from another listening server.

## DISCLAIMER

All tools and scripts reported and used in this repository serve solely and exclusively as material for research and learning purpose. The creator of this project is not responsible for any damage caused by the scripts. Use of these repository is at your own risk.

## Code

### 1 - Download and execute

The [code 1](code1.ino) is created to work on linux systems with XFCE interface. This code will execute the sequence to open the search bar and execute a new instance of the terminal, then in the terminal it runs the command to download the executable, the proper permissions will be given to the executable and it will be run.

Use something like `python` (`python3 -m http.server`) to delivery the payload.