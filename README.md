# CSE316
Operating system project
Que: 11. The following processes are being scheduled using a preemptive, round robin scheduling
algorithm. Each process is assigned a numerical priority, with a higher number indicating
a higher relative priority. In addition to the processes listed below, the system also has an
idle task (which consumes no CPU resources and is identified as P_idle ). This task has
priority 0 and is scheduled whenever the system has no other available processes to run.
The length of a time quantum is 10 units. If a process is preempted by a higher-priority
process, the preempted process is placed at the end of the queue.
Thread Priority Burst Arrival
P1 40 20 0
P2 30 25 25
P3 30 25 30
P4 35 15 60
P5 5 10 100
P6 10 10 105
Write a C code to
a. Show the scheduling order of the processes using a Gantt chart.
b. What is the turnaround time for each process?
c. What is the waiting time for each process?
d. What is the CPU utilization rate?


Que:22. Design a scheduling program to implements a Queue with two levels:
Level 1 : Fixed priority preemptive Scheduling
Level 2: Round Robin Scheduling
For a Fixed priority preemptive Scheduling (Queue1), the Priority 0 is highest priority. If one
process P1 is scheduled and running, another process P2 with higher priority comes. The New
process (high priority) process P2 preempts currently running process P1 and process P1 will go
to second level queue. Time for which process will strictly execute must be considered in the
multiples of 2. All the processes in second level queue will complete their execution according to
round robin scheduling.
Consider: 1. Queue 2 will be processed after Queue 1 becomes empty.
2. Priority of Queue 2 has lower priority than in Queue 1.
