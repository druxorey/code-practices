use std::time::{Duration, Instant};

// The average execution time of this script is 578.50 ms after 10 test

const ITERATIONS: usize = 10;
const NUMBER: usize = 100_000_000;

fn speedtest() -> Duration {
    let start = Instant::now();

    let mut count = 0;
    for _ in 0..NUMBER {
        count += 1;
    }

    start.elapsed()
}

fn main() {
    let mut total_execution_time = Duration::new(0, 0);

    println!("Starting speed test...");

    for i in 0..ITERATIONS {
        let final_duration = speedtest();
        total_execution_time += final_duration;
        println!("{}. Counting to number {} in Rust took {:?}", i + 1, NUMBER, final_duration);
    }

    let average_execution_time = total_execution_time / ITERATIONS as u32;
    println!("\n\u{1b}[0;32mAverage execution time: {:?}", average_execution_time);
}
