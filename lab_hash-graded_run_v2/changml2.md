


## Score: 150/150 (100.00%)


### ✓ - [0/0] - Output from `make`

- **Points**: 0 / 0


```
clang++  -std=c++1y -stdlib=libc++ -g -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -msse2 -c hashes.cpp -o .objs/hashes.o
clang++  -std=c++1y -stdlib=libc++ -g -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -msse2 -c textfile.cpp -o .objs/textfile.o
clang++  -std=c++1y -stdlib=libc++ -g -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -msse2 -c cs225/HSLAPixel.cpp -o .objs/cs225/HSLAPixel.o
clang++  -std=c++1y -stdlib=libc++ -g -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -msse2 -c cs225/PNG.cpp -o .objs/cs225/PNG.o
clang++  -std=c++1y -stdlib=libc++ -g -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -msse2 -c cs225/lodepng/lodepng.cpp -o .objs/cs225/lodepng/lodepng.o
clang++  -std=c++1y -stdlib=libc++ -g -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -msse2 -c tests/test-lp.cpp -o .objs/tests/test-lp.o
clang++  -std=c++1y -stdlib=libc++ -g -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -msse2 -c tests/test-dh.cpp -o .objs/tests/test-dh.o
clang++  -std=c++1y -stdlib=libc++ -g -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -msse2 -c tests/test-sc.cpp -o .objs/tests/test-sc.o
clang++  -std=c++1y -stdlib=libc++ -g -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -msse2 -c cs225/catch/catchmain.cpp -o .objs/cs225/catch/catchmain.o
clang++ .objs/hashes.o .objs/textfile.o .objs/cs225/HSLAPixel.o .objs/cs225/PNG.o .objs/cs225/lodepng/lodepng.o .objs/tests/test-lp.o .objs/tests/test-dh.o .objs/tests/test-sc.o .objs/cs225/catch/catchmain.o  -std=c++1y -stdlib=libc++ -lpthread -o test

```


### ✓ - [6/6] - LP::testRemoveEASY

- **Points**: 6 / 6

```
==20317== Memcheck, a memory error detector
==20317== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==20317== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==20317== Command: ./test -r xml "LP::testRemoveEASY"
==20317== 
==20317== 
==20317== HEAP SUMMARY:
==20317==     in use at exit: 0 bytes in 0 blocks
==20317==   total heap usage: 1,900 allocs, 1,900 frees, 242,741 bytes allocated
==20317== 
==20317== All heap blocks were freed -- no leaks are possible
==20317== 
==20317== For counts of detected and suppressed errors, rerun with: -v
==20317== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="LP::testRemoveEASY" tags="[valgrind][weight=6]" filename="tests/test-lp.cpp" line="13">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [10/10] - LP::testRemoveHard

- **Points**: 10 / 10

```
==20321== Memcheck, a memory error detector
==20321== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==20321== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==20321== Command: ./test -r xml "LP::testRemoveHard"
==20321== 
==20321== 
==20321== HEAP SUMMARY:
==20321==     in use at exit: 0 bytes in 0 blocks
==20321==   total heap usage: 1,922 allocs, 1,922 frees, 243,445 bytes allocated
==20321== 
==20321== All heap blocks were freed -- no leaks are possible
==20321== 
==20321== For counts of detected and suppressed errors, rerun with: -v
==20321== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="LP::testRemoveHard" tags="[valgrind][weight=10]" filename="tests/test-lp.cpp" line="35">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [7/7] - LP::testResizeOnce

- **Points**: 7 / 7

```
==20333== Memcheck, a memory error detector
==20333== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==20333== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==20333== Command: ./test -r xml "LP::testResizeOnce"
==20333== 
==20333== 
==20333== HEAP SUMMARY:
==20333==     in use at exit: 0 bytes in 0 blocks
==20333==   total heap usage: 2,018 allocs, 2,018 frees, 247,253 bytes allocated
==20333== 
==20333== All heap blocks were freed -- no leaks are possible
==20333== 
==20333== For counts of detected and suppressed errors, rerun with: -v
==20333== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="LP::testResizeOnce" tags="[valgrind][weight=7]" filename="tests/test-lp.cpp" line="63">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="2" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="2" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [11/11] - LP::testResizeAll

- **Points**: 11 / 11

```
==20336== Memcheck, a memory error detector
==20336== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==20336== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==20336== Command: ./test -r xml "LP::testResizeAll"
==20336== 
==20336== 
==20336== HEAP SUMMARY:
==20336==     in use at exit: 0 bytes in 0 blocks
==20336==   total heap usage: 1,917 allocs, 1,917 frees, 240,741 bytes allocated
==20336== 
==20336== All heap blocks were freed -- no leaks are possible
==20336== 
==20336== For counts of detected and suppressed errors, rerun with: -v
==20336== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="LP::testResizeAll" tags="[valgrind][weight=11]" filename="tests/test-lp.cpp" line="84">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="2" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="2" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [6/6] - LP::testInsertEasy

- **Points**: 6 / 6

```
==20340== Memcheck, a memory error detector
==20340== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==20340== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==20340== Command: ./test -r xml "LP::testInsertEasy"
==20340== 
==20340== 
==20340== HEAP SUMMARY:
==20340==     in use at exit: 0 bytes in 0 blocks
==20340==   total heap usage: 1,899 allocs, 1,899 frees, 242,709 bytes allocated
==20340== 
==20340== All heap blocks were freed -- no leaks are possible
==20340== 
==20340== For counts of detected and suppressed errors, rerun with: -v
==20340== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="LP::testInsertEasy" tags="[valgrind][weight=6]" filename="tests/test-lp.cpp" line="111">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [10/10] - LP::testInsertHard

- **Points**: 10 / 10

```
==20343== Memcheck, a memory error detector
==20343== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==20343== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==20343== Command: ./test -r xml "LP::testInsertHard"
==20343== 
==20343== 
==20343== HEAP SUMMARY:
==20343==     in use at exit: 0 bytes in 0 blocks
==20343==   total heap usage: 1,921 allocs, 1,921 frees, 243,413 bytes allocated
==20343== 
==20343== All heap blocks were freed -- no leaks are possible
==20343== 
==20343== For counts of detected and suppressed errors, rerun with: -v
==20343== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="LP::testInsertHard" tags="[valgrind][weight=10]" filename="tests/test-lp.cpp" line="131">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [6/6] - DH::testRemoveEASY

- **Points**: 6 / 6

```
==20371== Memcheck, a memory error detector
==20371== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==20371== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==20371== Command: ./test -r xml "DH::testRemoveEASY"
==20371== 
==20371== 
==20371== HEAP SUMMARY:
==20371==     in use at exit: 0 bytes in 0 blocks
==20371==   total heap usage: 1,900 allocs, 1,900 frees, 242,741 bytes allocated
==20371== 
==20371== All heap blocks were freed -- no leaks are possible
==20371== 
==20371== For counts of detected and suppressed errors, rerun with: -v
==20371== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="DH::testRemoveEASY" tags="[valgrind][weight=6]" filename="tests/test-dh.cpp" line="15">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [10/10] - DH::testRemoveHard

- **Points**: 10 / 10

```
==20406== Memcheck, a memory error detector
==20406== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==20406== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==20406== Command: ./test -r xml "DH::testRemoveHard"
==20406== 
==20406== 
==20406== HEAP SUMMARY:
==20406==     in use at exit: 0 bytes in 0 blocks
==20406==   total heap usage: 1,922 allocs, 1,922 frees, 243,445 bytes allocated
==20406== 
==20406== All heap blocks were freed -- no leaks are possible
==20406== 
==20406== For counts of detected and suppressed errors, rerun with: -v
==20406== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="DH::testRemoveHard" tags="[valgrind][weight=10]" filename="tests/test-dh.cpp" line="36">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [7/7] - DH::testResizeOnce

- **Points**: 7 / 7

```
==20409== Memcheck, a memory error detector
==20409== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==20409== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==20409== Command: ./test -r xml "DH::testResizeOnce"
==20409== 
==20409== 
==20409== HEAP SUMMARY:
==20409==     in use at exit: 0 bytes in 0 blocks
==20409==   total heap usage: 2,018 allocs, 2,018 frees, 247,253 bytes allocated
==20409== 
==20409== All heap blocks were freed -- no leaks are possible
==20409== 
==20409== For counts of detected and suppressed errors, rerun with: -v
==20409== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="DH::testResizeOnce" tags="[valgrind][weight=7]" filename="tests/test-dh.cpp" line="64">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="2" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="2" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [11/11] - DH::testResizeAll

- **Points**: 11 / 11

```
==20412== Memcheck, a memory error detector
==20412== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==20412== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==20412== Command: ./test -r xml "DH::testResizeAll"
==20412== 
==20412== 
==20412== HEAP SUMMARY:
==20412==     in use at exit: 0 bytes in 0 blocks
==20412==   total heap usage: 1,917 allocs, 1,917 frees, 240,741 bytes allocated
==20412== 
==20412== All heap blocks were freed -- no leaks are possible
==20412== 
==20412== For counts of detected and suppressed errors, rerun with: -v
==20412== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="DH::testResizeAll" tags="[valgrind][weight=11]" filename="tests/test-dh.cpp" line="85">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="2" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="2" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [6/6] - DH::testInsertEasy

- **Points**: 6 / 6

```
==20415== Memcheck, a memory error detector
==20415== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==20415== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==20415== Command: ./test -r xml "DH::testInsertEasy"
==20415== 
==20415== 
==20415== HEAP SUMMARY:
==20415==     in use at exit: 0 bytes in 0 blocks
==20415==   total heap usage: 1,899 allocs, 1,899 frees, 242,709 bytes allocated
==20415== 
==20415== All heap blocks were freed -- no leaks are possible
==20415== 
==20415== For counts of detected and suppressed errors, rerun with: -v
==20415== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="DH::testInsertEasy" tags="[valgrind][weight=6]" filename="tests/test-dh.cpp" line="111">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [10/10] - DH::testInsertHard

- **Points**: 10 / 10

```
==20418== Memcheck, a memory error detector
==20418== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==20418== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==20418== Command: ./test -r xml "DH::testInsertHard"
==20418== 
==20418== 
==20418== HEAP SUMMARY:
==20418==     in use at exit: 0 bytes in 0 blocks
==20418==   total heap usage: 1,921 allocs, 1,921 frees, 243,413 bytes allocated
==20418== 
==20418== All heap blocks were freed -- no leaks are possible
==20418== 
==20418== For counts of detected and suppressed errors, rerun with: -v
==20418== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="DH::testInsertHard" tags="[valgrind][weight=10]" filename="tests/test-dh.cpp" line="131">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [6/6] - SC::testRemoveEASY

- **Points**: 6 / 6

```
==20446== Memcheck, a memory error detector
==20446== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==20446== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==20446== Command: ./test -r xml "SC::testRemoveEASY"
==20446== 
==20446== 
==20446== HEAP SUMMARY:
==20446==     in use at exit: 0 bytes in 0 blocks
==20446==   total heap usage: 1,899 allocs, 1,899 frees, 243,448 bytes allocated
==20446== 
==20446== All heap blocks were freed -- no leaks are possible
==20446== 
==20446== For counts of detected and suppressed errors, rerun with: -v
==20446== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="SC::testRemoveEASY" tags="[valgrind][weight=6]" filename="tests/test-sc.cpp" line="14">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [10/10] - SC::testRemoveHard

- **Points**: 10 / 10

```
==20453== Memcheck, a memory error detector
==20453== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==20453== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==20453== Command: ./test -r xml "SC::testRemoveHard"
==20453== 
==20453== 
==20453== HEAP SUMMARY:
==20453==     in use at exit: 0 bytes in 0 blocks
==20453==   total heap usage: 1,921 allocs, 1,921 frees, 244,328 bytes allocated
==20453== 
==20453== All heap blocks were freed -- no leaks are possible
==20453== 
==20453== For counts of detected and suppressed errors, rerun with: -v
==20453== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="SC::testRemoveHard" tags="[valgrind][weight=10]" filename="tests/test-sc.cpp" line="35">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [7/7] - SC::testResizeOnce

- **Points**: 7 / 7

```
==20458== Memcheck, a memory error detector
==20458== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==20458== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==20458== Command: ./test -r xml "SC::testResizeOnce"
==20458== 
==20458== 
==20458== HEAP SUMMARY:
==20458==     in use at exit: 0 bytes in 0 blocks
==20458==   total heap usage: 2,051 allocs, 2,051 frees, 251,720 bytes allocated
==20458== 
==20458== All heap blocks were freed -- no leaks are possible
==20458== 
==20458== For counts of detected and suppressed errors, rerun with: -v
==20458== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="SC::testResizeOnce" tags="[valgrind][weight=7]" filename="tests/test-sc.cpp" line="63">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="2" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="2" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [11/11] - SC::testResizeAll

- **Points**: 11 / 11

```
==20463== Memcheck, a memory error detector
==20463== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==20463== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==20463== Command: ./test -r xml "SC::testResizeAll"
==20463== 
==20463== 
==20463== HEAP SUMMARY:
==20463==     in use at exit: 0 bytes in 0 blocks
==20463==   total heap usage: 1,950 allocs, 1,950 frees, 244,904 bytes allocated
==20463== 
==20463== All heap blocks were freed -- no leaks are possible
==20463== 
==20463== For counts of detected and suppressed errors, rerun with: -v
==20463== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="SC::testResizeAll" tags="[valgrind][weight=11]" filename="tests/test-sc.cpp" line="84">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="2" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="2" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [6/6] - SC::testInsertEasy

- **Points**: 6 / 6

```
==20468== Memcheck, a memory error detector
==20468== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==20468== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==20468== Command: ./test -r xml "SC::testInsertEasy"
==20468== 
==20468== 
==20468== HEAP SUMMARY:
==20468==     in use at exit: 0 bytes in 0 blocks
==20468==   total heap usage: 1,898 allocs, 1,898 frees, 243,400 bytes allocated
==20468== 
==20468== All heap blocks were freed -- no leaks are possible
==20468== 
==20468== For counts of detected and suppressed errors, rerun with: -v
==20468== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="SC::testInsertEasy" tags="[valgrind][weight=6]" filename="tests/test-sc.cpp" line="110">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [10/10] - SC::testInsertHard

- **Points**: 10 / 10

```
==20473== Memcheck, a memory error detector
==20473== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==20473== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==20473== Command: ./test -r xml "SC::testInsertHard"
==20473== 
==20473== 
==20473== HEAP SUMMARY:
==20473==     in use at exit: 0 bytes in 0 blocks
==20473==   total heap usage: 1,920 allocs, 1,920 frees, 244,280 bytes allocated
==20473== 
==20473== All heap blocks were freed -- no leaks are possible
==20473== 
==20473== For counts of detected and suppressed errors, rerun with: -v
==20473== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="SC::testInsertHard" tags="[valgrind][weight=10]" filename="tests/test-sc.cpp" line="130">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


---

This report was generated for **changml2** using **9582eef1d79a530bc329ff2cf772d4065e72b010** (from **November 5th 2018, 12:15:00 am**)
