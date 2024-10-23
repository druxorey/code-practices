
<h1 align="center">Code Practices</h1>

<p align="center">
<a href="#repository-structure"><img src="https://img.shields.io/badge/structure-BD93F9?style=for-the-badge"></a>
<a href="#how-to-execute-scripts"><img src="https://img.shields.io/badge/how%20to%20run-BD93F9?style=for-the-badge"></a>
</p>

<p align="center">A collection of coding exercises to help you improve your programming skills</p>

## Repository Structure

- **_exercises**: This directory contains the exercise texts in Markdown format.

	- [S01-elemental-actions](./_exercises_/S01-EN-elemental-actions.md)
	- [S02-conditional-structure-control](./_exercises_/S02-EN-conditional-structure-control.md)
	- [S03-iterative-structure-control](./_exercises_/S03-EN-iterative-structure-control.md)
	- [S04-functions](./_exercises_/S04-EN-functions.md)
	- [S05-arrays](./_exercises_/S05-EN-arrays.md)
	- [S06-structs-and-files](./_exercises_/S06-EN-structs-and-files.md)
	- [S07-object-oriented](./_exercises_/S07-EN-object-oriented.md)

- **Languages**: Each programming language has its own directory. Within each, there are subdirectories named after the sections corresponding to the exercises. In each language directory, there is a `U1-libraries` directory, where commonly used functions are stored to keep the code clean, and a `U2-experiments` directory, where code not part of the exercises but used to test the language's features is stored. Additionally, there are directories named `U3`, `U4`, and so on, containing exercises specific to each language.

## How To Execute Scripts

### Bash

To execute a Bash script, navigate to the directory containing the script and use the following command:

    bash script-name.sh

### C++

To execute a C++ script, navigate to the directory containing the script and compile it with `g++` (or any other C++ compiler) using the following command:

    g++ script-name.cpp -o script-compiled

Then run it with the next command:

    ./script-name

### Golang

To execute a Go script, navigate to the directory containing the script and compile it with `go` using the following command:

    go build -o script-compiled script-name.cpp 

Then run it with the next command:

    ./script-name

### Python

To execute a Python script, navigate to the directory containing the script and use the following command:

    python3 script-name.py

### Rust

To execute a Rust script, navigate to the directory containing the script and compile it with `rust` using the following command:

    rustc script-name.rs -o script-compiled

Then run it with the next command:

    ./script-name

## Contribute

If you want to add new exercises or improve existing ones, follow these steps:

1. Open an issue to discuss the changes.
2. Fork this repository.
3. Create a new branch for your contribution: `git checkout -b your-branch-name`.
4. Make your changes. To add new exercises, edit the Markdown files in the `_exercises` directory.
5. Commit your changes, for example: `git commit -m 'feat(exercises): added S05[E14] 'pharmacy-value' exercise.'`.
6. Push your changes to your forked repository: `git push origin your-branch-name`.
7. Open a Pull Request in this repository and reference the original issue.

## License

This project is licensed under the GPL-3.0 License. See the [LICENSE](LICENSE) file for more details.
