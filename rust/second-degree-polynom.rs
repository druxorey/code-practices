use std::io;

fn main() {
    let mut firstNumber = 0;
    let stdin = io::stdin();

    println!("Ingresa un número");

    stdin.read_line(&mut firstNumber);

    println!("{}",firstNumber)
}
