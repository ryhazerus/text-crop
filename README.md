# Text-Crop

Created for personal use to reduce file size when using LLMs. The program remove all white spaces form the file inculding new lines and prints it to your terminal. LLMs can still figure out the context form the blob generated and it saves on tokens and characther limits from some LLMs.

Handy to know:
> Handles big files nicely due to reading the file in blocks.

## Requirements

- Nothing special all made with the C++ standard library
- Make
- GCC

## Installation

1. Clone the project
2. Make
   ```sh
   make 
   ```
3. Run the generated program
   ```sh
   ./output/main <filename>
   ```

## Usage
Run the program as or put in your PATH environment for easy access.

```sh
./output/main <filename>
```
