# Disk, CPU Scheduling, Page Replacement, and Direct Memory Access Algorithms

This repository contains code regarding **Disk Scheduling, CPU Scheduling, Page Replacement, and Direct Memory Access (DMA) Algorithms** . It also contains implementations of fundamental operating system algorithms used for process scheduling, memory management, and disk operations.

## 📌 Features

- **Disk Scheduling Algorithms**
  - First-Come, First-Served (FCFS)
  - Shortest Seek Time First (SSTF)
  - SCAN (Elevator Algorithm)
  - C-SCAN (Circular SCAN)
  - LOOK
  - C-LOOK

- **CPU Scheduling Algorithms**
  - First-Come, First-Served (FCFS)
  - Shortest Job First (SJF)
  - Shortest Remaining Job First (SRJF)

- **Page Replacement Algorithms**
  - First-In-First-Out (FIFO/FCFS)
  - Least Recently Used (LRU)
  - Most Recently Used (MRU)
  - Optimal Page Replacement

- **Direct Memory Access (DMA) Algorithms**
  - Best Fit
  - First Fit
  - Next Fit
  - Worst Fit

## ⚙️ Installation & Usage

### Clone the Repository
```bash
git clone https://github.com/sabeshraaj/Operating-Systems.git
cd Operating-Systems
```

### Compile and Run
Each algorithm is implemented in C (or other languages if applicable). To compile and run, use:

```bash
gcc filename.c -o output
./output
```

For example, to run FCFS disk scheduling:
```bash
gcc disk_scheduling_fcfs.c -o fcfs
./fcfs
```

## 📝 Contributing
Contributions are welcome! If you’d like to improve or add new algorithms:
1. Fork the repository
2. Create a new branch
3. Commit your changes
4. Open a pull request 🚀

## 🤝 Acknowledgments
- Operating System textbooks and research papers
- Open-source contributors who help improve scheduling and memory management algorithms

Happy Coding! 🎯

