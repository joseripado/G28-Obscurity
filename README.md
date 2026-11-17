PROJECT G28: Security Through Obscurity: Esoteric Languages & SMC in C
Student: José Javier Ripado Bermejo (er2520@edu.hmu.gr)

GitHub Repository: https://github.com/joseripado/G28-Obscurity

Week 1 Progress & Deliverables:
1. Environment Configuration:
   - Configured Linux WSL2 (Ubuntu 24.04 LTS) toolchain.
   - Verified build and security tools: gcc, gdb, binutils (strings, objdump), upx.

2. Source Code & Baseline Creation:
   - src/hello.c: Initial toolchain sanity check script.
   - src/baseline.c: Un-obfuscated target program simulating a license key verification logic.

3. Static Leakage Analysis:
   - Compiled baseline target with `make -C src`.
   - Verified plaintext credential leakage (`HMU-SECURE-KEY-2026`) using `strings src/baseline | grep HMU-SECURE`.

4. Living Slide Deck Update:
   - Updated Presentation_G28_Live.pdf with mandatory sequence: Title Page, Executive Index,
     Threat Model, Project Motivation, Weekly Progress Changelog, and Prioritized To-Do List.
