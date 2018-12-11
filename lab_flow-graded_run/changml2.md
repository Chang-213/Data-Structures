


## Score: 10/10 (100.00%)


### ✓ - [0/0] - Output from `make`

- **Points**: 0 / 0


```
clang++  -std=c++1y -stdlib=libc++ -g -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -msse2 -c graph.cpp -o .objs/graph.o
clang++  -std=c++1y -stdlib=libc++ -g -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -msse2 -c NetworkFlow.cpp -o .objs/NetworkFlow.o
clang++  -std=c++1y -stdlib=libc++ -g -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -msse2 -c cs225/HSLAPixel.cpp -o .objs/cs225/HSLAPixel.o
clang++  -std=c++1y -stdlib=libc++ -g -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -msse2 -c cs225/PNG.cpp -o .objs/cs225/PNG.o
clang++  -std=c++1y -stdlib=libc++ -g -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -msse2 -c cs225/lodepng/lodepng.cpp -o .objs/cs225/lodepng/lodepng.o
clang++  -std=c++1y -stdlib=libc++ -g -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -msse2 -c tests/unit_tests.cpp -o .objs/tests/unit_tests.o
clang++  -std=c++1y -stdlib=libc++ -g -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -msse2 -c cs225/catch/catchmain.cpp -o .objs/cs225/catch/catchmain.o
clang++ .objs/graph.o .objs/NetworkFlow.o .objs/cs225/HSLAPixel.o .objs/cs225/PNG.o .objs/cs225/lodepng/lodepng.o .objs/tests/unit_tests.o .objs/cs225/catch/catchmain.o  -std=c++1y -stdlib=libc++ -lpthread -o test

```


### ✓ - [1/1] - Graph a - 4 -> b  has flow of 4.

- **Points**: 1 / 1

```
==460== Memcheck, a memory error detector
==460== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==460== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==460== Command: ./test -r xml "Graph\ a\ -\ 4\ -\>\ b\ \ has\ flow\ of\ 4."
==460== 
==460== 
==460== HEAP SUMMARY:
==460==     in use at exit: 0 bytes in 0 blocks
==460==   total heap usage: 2,021 allocs, 2,021 frees, 237,112 bytes allocated
==460== 
==460== All heap blocks were freed -- no leaks are possible
==460== 
==460== For counts of detected and suppressed errors, rerun with: -v
==460== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="Graph a - 4 -> b  has flow of 4." tags="[valgrind][weight=1]" filename="tests/unit_tests.cpp" line="10">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - Testing flow through two pipes - secret test

- **Points**: 1 / 1

```
==469== Memcheck, a memory error detector
==469== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==469== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==469== Command: ./test -r xml "Testing\ flow\ through\ two\ pipes\ -\ secret\ test"
==469== 
==469== 
==469== HEAP SUMMARY:
==469==     in use at exit: 0 bytes in 0 blocks
==469==   total heap usage: 2,066 allocs, 2,066 frees, 240,880 bytes allocated
==469== 
==469== All heap blocks were freed -- no leaks are possible
==469== 
==469== For counts of detected and suppressed errors, rerun with: -v
==469== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="Testing flow through two pipes - secret test" tags="[valgrind][weight=1]" filename="tests/unit_tests.cpp" line="23">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - Graph a - 10 -> b  has flow of 10.

- **Points**: 1 / 1

```
==528== Memcheck, a memory error detector
==528== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==528== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==528== Command: ./test -r xml "Graph\ a\ -\ 10\ -\>\ b\ \ has\ flow\ of\ 10."
==528== 
==528== 
==528== HEAP SUMMARY:
==528==     in use at exit: 0 bytes in 0 blocks
==528==   total heap usage: 2,021 allocs, 2,021 frees, 237,112 bytes allocated
==528== 
==528== All heap blocks were freed -- no leaks are possible
==528== 
==528== For counts of detected and suppressed errors, rerun with: -v
==528== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="Graph a - 10 -> b  has flow of 10." tags="[valgrind][weight=1]" filename="tests/unit_tests.cpp" line="40">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - Testing flow through two pipes

- **Points**: 1 / 1

```
==534== Memcheck, a memory error detector
==534== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==534== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==534== Command: ./test -r xml "Testing\ flow\ through\ two\ pipes"
==534== 
==534== 
==534== HEAP SUMMARY:
==534==     in use at exit: 0 bytes in 0 blocks
==534==   total heap usage: 2,066 allocs, 2,066 frees, 240,656 bytes allocated
==534== 
==534== All heap blocks were freed -- no leaks are possible
==534== 
==534== For counts of detected and suppressed errors, rerun with: -v
==534== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="Testing flow through two pipes" tags="[valgrind][weight=1]" filename="tests/unit_tests.cpp" line="53">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - Testing simple backflow - secret

- **Points**: 1 / 1

```
==539== Memcheck, a memory error detector
==539== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==539== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==539== Command: ./test -r xml "Testing\ simple\ backflow\ -\ secret"
==539== 
==539== 
==539== HEAP SUMMARY:
==539==     in use at exit: 0 bytes in 0 blocks
==539==   total heap usage: 2,134 allocs, 2,134 frees, 247,144 bytes allocated
==539== 
==539== All heap blocks were freed -- no leaks are possible
==539== 
==539== For counts of detected and suppressed errors, rerun with: -v
==539== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="Testing simple backflow - secret" tags="[valgrind][weight=1]" filename="tests/unit_tests.cpp" line="70">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - Testing simple backflow

- **Points**: 1 / 1

```
==546== Memcheck, a memory error detector
==546== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==546== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==546== Command: ./test -r xml "Testing\ simple\ backflow"
==546== 
==546== 
==546== HEAP SUMMARY:
==546==     in use at exit: 0 bytes in 0 blocks
==546==   total heap usage: 2,115 allocs, 2,115 frees, 242,976 bytes allocated
==546== 
==546== All heap blocks were freed -- no leaks are possible
==546== 
==546== For counts of detected and suppressed errors, rerun with: -v
==546== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="Testing simple backflow" tags="[valgrind][weight=1]" filename="tests/unit_tests.cpp" line="93">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - Testing full pipe usage - secret

- **Points**: 1 / 1

```
==554== Memcheck, a memory error detector
==554== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==554== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==554== Command: ./test -r xml "Testing\ full\ pipe\ usage\ -\ secret"
==554== 
==554== 
==554== HEAP SUMMARY:
==554==     in use at exit: 0 bytes in 0 blocks
==554==   total heap usage: 2,153 allocs, 2,153 frees, 248,368 bytes allocated
==554== 
==554== All heap blocks were freed -- no leaks are possible
==554== 
==554== For counts of detected and suppressed errors, rerun with: -v
==554== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="Testing full pipe usage - secret" tags="[valgrind][weight=1]" filename="tests/unit_tests.cpp" line="114">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - Testing full pipe usage

- **Points**: 1 / 1

```
==560== Memcheck, a memory error detector
==560== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==560== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==560== Command: ./test -r xml "Testing\ full\ pipe\ usage"
==560== 
==560== 
==560== HEAP SUMMARY:
==560==     in use at exit: 0 bytes in 0 blocks
==560==   total heap usage: 2,167 allocs, 2,167 frees, 246,576 bytes allocated
==560== 
==560== All heap blocks were freed -- no leaks are possible
==560== 
==560== For counts of detected and suppressed errors, rerun with: -v
==560== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="Testing full pipe usage" tags="[valgrind][weight=1]" filename="tests/unit_tests.cpp" line="139">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - Testing 3 x 3 plumbing - secret

- **Points**: 1 / 1

```
==563== Memcheck, a memory error detector
==563== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==563== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==563== Command: ./test -r xml "Testing\ 3\ x\ 3\ plumbing\ -\ secret"
==563== 
==563== 
==563== HEAP SUMMARY:
==563==     in use at exit: 0 bytes in 0 blocks
==563==   total heap usage: 2,237 allocs, 2,237 frees, 256,896 bytes allocated
==563== 
==563== All heap blocks were freed -- no leaks are possible
==563== 
==563== For counts of detected and suppressed errors, rerun with: -v
==563== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="Testing 3 x 3 plumbing - secret" tags="[valgrind][weight=1]" filename="tests/unit_tests.cpp" line="164">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - Testing 3 x 3 plumbing

- **Points**: 1 / 1

```
==599== Memcheck, a memory error detector
==599== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==599== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==599== Command: ./test -r xml "Testing\ 3\ x\ 3\ plumbing"
==599== 
==599== 
==599== HEAP SUMMARY:
==599==     in use at exit: 0 bytes in 0 blocks
==599==   total heap usage: 2,238 allocs, 2,238 frees, 254,936 bytes allocated
==599== 
==599== All heap blocks were freed -- no leaks are possible
==599== 
==599== For counts of detected and suppressed errors, rerun with: -v
==599== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="Testing 3 x 3 plumbing" tags="[valgrind][weight=1]" filename="tests/unit_tests.cpp" line="203">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


---

This report was generated for **changml2** using **d89f1bc221422da5cd8347eafe5f6075aeb88abb** (from **December 10th 2018, 12:15:00 am**)
