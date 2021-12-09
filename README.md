# OS

SRTF Scheduling

Out of all the available processes, CPU is assigned to the process having the smallest burst time.

1-In the case of a tie, it is broken by FCFS Scheduling.
2-The preemptive mode of Shortest Job First is called the Shortest Remaining Time First(SRTF).

Advantages-

1-SRTF is optimal and guarantees the minimum average waiting time.
2-It provides a standard for other algorithms since no other algorithm
  performs better than it.

Disadvantages-

1-It cannot be implemented practically since the burst time of the
  processes can not be known in advance.
2-It leads to starvation for processes with larger burst time.
3-Priorities cannot be set for the processes.
4-Processes with larger burst time have poor response time.



Fork system call is used for creating a new process, which is called child process, which runs concurrently with the process that makes the fork() call (parent process). After a new child process is created, both processes will execute the next instruction following the fork() system call. A child process uses the same pc(program counter), same CPU registers, same open files which use in the parent process.
