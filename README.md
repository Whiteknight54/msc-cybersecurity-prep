# MSc Cyber Security Preparation – UWE Bristol

This repository contains all preparatory work completed ahead of the MSc Cyber Security program at UWE Bristol (January 2025 intake). It includes hands-on coding tasks in C, network traffic analysis, and video presentations as required by the program's pre-arrival coursework.

---

## Table of Contents

- [C Programming Tasks (IoT Prep)](#c-programming-tasks-iot-prep)
- [Network Traffic Analysis](#network-traffic-analysis)
- [Getting Started](#getting-started)

---

## C Programming Tasks (IoT Prep)

These C programs were developed to simulate randomness testing using pseudorandom number generation. Each task helps build the foundations for understanding data behavior in embedded and IoT systems.

| Filename          | Description |
|-------------------|-------------|
| `HelloWorld.c`    | Simple program that prints "Hello, GitHub World!" |
| `mean_test.c`     | Generates 1000 random numbers and calculates the mean (expected ~4.5) |
| `frequency_test.c`| Generates 10,000 random digits (0–9), checks if distribution is ~10% each |
| `odd-even_test.c` | Generates 10,000 numbers and checks 50/50 split between odd and even |
| `serial_test.c`   | Generates 10,000 digit pairs (00–99), verifies ~1% frequency for each |

Folder: `Random number tests (IoT module prep)`

---

## Network Traffic Analysis

Analysis of two packet capture (PCAP) cases from [malware-traffic-analysis.net](https://www.malware-traffic-analysis.net/), including identification of attack patterns, suspicious IPs, payloads, and infection methods.

### 🕵️‍♂️ Case 1: Fake Software Site Download (2025-01-22)
- `2025-01-22-traffic-analysis-exercise.pcap`
- `Fake Software Site Download Case (2025-01-22).pptx`
- `video2989318214.mp4`

### Case 2: Interlock RAT Case (2025-06-13)
- `2025-06-13-traffic-analysis-exercise.pcap`
- `Interlock RAT Case (2025-06-13).pptx`
- `video1893813214.mp4`

Folder: `network analysis presentation`

---

## Getting Started

To compile and run any C program in this repo:

```bash
gcc filename.c -o output.out
./output.out
