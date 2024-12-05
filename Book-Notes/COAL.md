# Computer Organization and Assembly language

- Basically we are studying only new language but concepts are same like variable, conditional statement.
- Why we leaning new language? If you are working on web then C++ is very bad language but when you working in game development C++ is optimal language.
- C++(high-level) language is used to structure program and Assembly language(low level) language is used to optimize the program.
- Why you need to do Masters, What things do you want to learn in Masters and Are these things you can learn in BS or not?
- Zero tolerance plagiarism policy | Linux is only offically supported OS. NASM
- If we see `0x` at the start of any address, we should clearly understand that it is hexadecimal number.
- Source code(High level code) is easily understandable by humans. Machine code(Low level code) is easily understandable by machines.
- Ram has low address lower and High address upper. /32-bit /64-bit /16-bit. First we wrote source code(.cpp) it is compiled and converted into compiler code(.exe) and store in hard disk. To execute we bring it in ram.
- How instruction are taken from RAM to CPU. Ram take instruction from Low to Higher. But we write instruction from Higher to lower.
- CPU is extremly fast but other componenets are very slow.
- Let's say i have to do work on instruction Iam sitting on desk(CPU). I said (peon)Ram to give me instruction 6 he goes and waste his some time and find instruction 6 and give me that during that time cpu waste its time but cpu has speed 10 year time his waiting. CPU is extremly fast. CPU has its own desk(Registers) for working So he say to Ram give me 20 instruction on my desk(Registers). and I will be solving 20 instruction you go and fetch 30 more instruction from library(Library-Peon example).
- The internal working memory of CPU is registers and it's very expensive and faster than SSD,RAM,NVME. We cannot say register 16gb just like RAM 16gb. Because it's very expensive. just Register cost more than 60lac if we made with register memory. ` CPU --> Primary Memory --> RAM || CPU --> Working area --> Registers. ` Ram is extremly slow than register.
- Cache(Library-Peon example) we hire another peon. Peon 1(RAM) is taking instruction and take them into confront room(samna wala room). peon 2(Cache) take instruction from Room and take them on desk(CPU). Cache take data from Ram So that it give instruction to Register fastly.` Peon 1(Ram) Very large --> Very Slow || peon 2(Cache) Very small --> Very fast || desk(CPU) Very small --> Extremly fast `
- We can easily give name to register of cpu because they are very less like (ax, bx, cx are register name). We call ram memory units Chunck because they are very large in size. Cpu knows which last instruction or current instruction is executed.
- Printing something on screen through assembly language is not such important. We read something from Ram and bring it to register.
- RAM is slow. CPU needs to keep track of which instruction it is executing(Plus some other stuff like errors) "Fetch-Decode-Execute" cycle.
- `mov   ax  ,  25       ; move 25 to Ax register` here mov is instruction(operator) and (ax , 25) is operands, semicollon(;) is for comment writing.
- `inc  ax   ; increment value in Ax` inc is instruction(operator) and ax is operand.
- Assembly language variable are almost same like registers.
- Assembly language is very usefull when you understand the working brain of computer it become easy to debug. You can use assembly language in every field of computer science.
- We cannot try to solve the problem by learning assembly language(like c,c++,python languages are there). So we are actually trying to understand the brain of computer.

```
    8-bit           --
    16-bit          8086
    32-bit          x86, "IA-32" architecture
    64-bit          "amd64"

```

- Acumlator registor size shows define device bits.
- In general, all are based on the `Von Neumann Architecture`

 1. Code and data both store in memory
 2. General Purpose
 3. Fetch, decode, execute.
 4. Every computer architecture is based on Von Neumann architecture except Quantaumm computer.

- dsf

- Empty
- Empty
- Empty
- Empty
- Empty
- Empty
- Empty
- Empty
- Empty

## UNIVERSITY WORK

- This concept is thoroughly discussed in lecture 1. Here is the summary in simple words:

- Within the CPU, we have three busses: Address bus, Data bus, and Control bus.
- When processor wants to read something from memory, it sends a control signal to memory through Control bus (I want to read something from you).
- The memory changes its behaviour in response to this signal. Now it is ready to be read.
- The processor sends the address of the memory cell (from where it wants to read) on the Address bus towards the memory.
- The memory reads the data on this location and places it on Data bus which travels towards processor.
- In assembly language, group typically refers to a collection of related items, such as:

- Instruction Groups: A set of instructions that perform similar operations, like arithmetic or logical instructions.
- Segment Group: In memory segmentation, a group can refer to segments that are logically related and grouped together (e.g., code, data, stack segments).
- Register Groups: Registers can be grouped based on functionality, like general-purpose registers or special-purpose registers.
- In simple terms, a group organizes similar elements, such as instructions or memory segments, to make programming more structured and efficient.
- What is a Bus?

- What is bus
- A bus is a communication system that transfers data between components inside a computer or between computers. It consists of a set of physical connections (wires or traces) that carry signals, allowing multiple components (like the CPU, memory, and I/O devices) to communicate with each other. Buses help reduce the number of pathways required for communication, simplifying the design and improving efficiency.
- Types of Buses

1. Address Bus

Function: Carries memory addresses from the CPU to memory and I/O devices.
Direction: Typically unidirectional (from CPU to memory).
Purpose: Specifies the location of data in memory, enabling the CPU to read from or write to specific addresses.
2. Data Bus

Function: Transmits actual data between the CPU, memory, and I/O devices.
Direction: Bi-directional (data can flow in both directions).
Purpose: Facilitates the movement of data within the system, allowing the CPU to send or receive information.
3. Control Bus

Function: Carries control signals that manage and coordinate operations between the CPU and other components.
Direction: Bi-directional.
Purpose: Controls the timing and direction of data transfers, ensuring that all components operate in sync (e.g., signals for read/write operations).
