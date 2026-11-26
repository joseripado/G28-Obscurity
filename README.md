PROJECT G28: Security Through Obscurity: Esoteric Languages & SMC in C
Student: José Javier Ripado Bermejo (er2520@edu.hmu.gr)

GitHub Repository: https://github.com/joseripado/G28-Obscurity

Week 2 Progress & Deliverables:
1. Theoretical Framework:
   - Documented Collberg's Obfuscation Taxonomy (Layout, Data, Control, Preventive).
   - Analyzed Esoteric Language Paradigm (Brainfuck 8-opcode tape model).

2. Code & Esoteric Engine:
   - src/bf_interpreter.c: Custom C interpreter executing Brainfuck syntax.
   - src/hello.bf: Brainfuck sample program outputting formatted text.
   - src/baseline.c: Baseline control target containing static credentials.

3. Build & Execution:
   - Compiled all binaries via `make -C src`.
   - Executed Brainfuck interpreter: `./src/bf_interpreter src/hello.bf`.

4. Living Slide Deck Updates (Presentation_G28_Live.pdf):
   - Added Slide 5 (Obfuscation Taxonomy).
   - Added Slide 6 (Esoteric Paradigm & Brainfuck Engine).
   - Added Slide 9 (Setup & Toolchain Architecture).
   - Updated Slide 13 (Progress Changelog) & Slide 14 (Prioritized To-Do List).
