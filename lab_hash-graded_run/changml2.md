


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
==2906== Memcheck, a memory error detector
==2906== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==2906== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==2906== Command: ./test -r xml "LP::testRemoveEASY"
==2906== 
==2906== 
==2906== HEAP SUMMARY:
==2906==     in use at exit: 0 bytes in 0 blocks
==2906==   total heap usage: 1,900 allocs, 1,900 frees, 242,741 bytes allocated
==2906== 
==2906== All heap blocks were freed -- no leaks are possible
==2906== 
==2906== For counts of detected and suppressed errors, rerun with: -v
==2906== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==2918== Memcheck, a memory error detector
==2918== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==2918== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==2918== Command: ./test -r xml "LP::testRemoveHard"
==2918== 
==2918== 
==2918== HEAP SUMMARY:
==2918==     in use at exit: 0 bytes in 0 blocks
==2918==   total heap usage: 1,922 allocs, 1,922 frees, 243,445 bytes allocated
==2918== 
==2918== All heap blocks were freed -- no leaks are possible
==2918== 
==2918== For counts of detected and suppressed errors, rerun with: -v
==2918== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==2936== Memcheck, a memory error detector
==2936== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==2936== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==2936== Command: ./test -r xml "LP::testResizeOnce"
==2936== 
==2936== 
==2936== HEAP SUMMARY:
==2936==     in use at exit: 0 bytes in 0 blocks
==2936==   total heap usage: 2,018 allocs, 2,018 frees, 247,253 bytes allocated
==2936== 
==2936== All heap blocks were freed -- no leaks are possible
==2936== 
==2936== For counts of detected and suppressed errors, rerun with: -v
==2936== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==2939== Memcheck, a memory error detector
==2939== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==2939== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==2939== Command: ./test -r xml "LP::testResizeAll"
==2939== 
==2939== 
==2939== HEAP SUMMARY:
==2939==     in use at exit: 0 bytes in 0 blocks
==2939==   total heap usage: 1,917 allocs, 1,917 frees, 240,741 bytes allocated
==2939== 
==2939== All heap blocks were freed -- no leaks are possible
==2939== 
==2939== For counts of detected and suppressed errors, rerun with: -v
==2939== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==2947== Memcheck, a memory error detector
==2947== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==2947== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==2947== Command: ./test -r xml "LP::testInsertEasy"
==2947== 
==2947== 
==2947== HEAP SUMMARY:
==2947==     in use at exit: 0 bytes in 0 blocks
==2947==   total heap usage: 1,899 allocs, 1,899 frees, 242,709 bytes allocated
==2947== 
==2947== All heap blocks were freed -- no leaks are possible
==2947== 
==2947== For counts of detected and suppressed errors, rerun with: -v
==2947== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==2990== Memcheck, a memory error detector
==2990== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==2990== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==2990== Command: ./test -r xml "LP::testInsertHard"
==2990== 
==2990== 
==2990== HEAP SUMMARY:
==2990==     in use at exit: 0 bytes in 0 blocks
==2990==   total heap usage: 1,921 allocs, 1,921 frees, 243,413 bytes allocated
==2990== 
==2990== All heap blocks were freed -- no leaks are possible
==2990== 
==2990== For counts of detected and suppressed errors, rerun with: -v
==2990== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==3039== Memcheck, a memory error detector
==3039== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==3039== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==3039== Command: ./test -r xml "DH::testRemoveEASY"
==3039== 
==3039== 
==3039== HEAP SUMMARY:
==3039==     in use at exit: 0 bytes in 0 blocks
==3039==   total heap usage: 1,900 allocs, 1,900 frees, 242,741 bytes allocated
==3039== 
==3039== All heap blocks were freed -- no leaks are possible
==3039== 
==3039== For counts of detected and suppressed errors, rerun with: -v
==3039== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==3074== Memcheck, a memory error detector
==3074== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==3074== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==3074== Command: ./test -r xml "DH::testRemoveHard"
==3074== 
==3074== 
==3074== HEAP SUMMARY:
==3074==     in use at exit: 0 bytes in 0 blocks
==3074==   total heap usage: 1,922 allocs, 1,922 frees, 243,445 bytes allocated
==3074== 
==3074== All heap blocks were freed -- no leaks are possible
==3074== 
==3074== For counts of detected and suppressed errors, rerun with: -v
==3074== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==3129== Memcheck, a memory error detector
==3129== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==3129== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==3129== Command: ./test -r xml "DH::testResizeOnce"
==3129== 
==3129== 
==3129== HEAP SUMMARY:
==3129==     in use at exit: 0 bytes in 0 blocks
==3129==   total heap usage: 2,018 allocs, 2,018 frees, 247,253 bytes allocated
==3129== 
==3129== All heap blocks were freed -- no leaks are possible
==3129== 
==3129== For counts of detected and suppressed errors, rerun with: -v
==3129== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==3216== Memcheck, a memory error detector
==3216== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==3216== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==3216== Command: ./test -r xml "DH::testResizeAll"
==3216== 
==3216== 
==3216== HEAP SUMMARY:
==3216==     in use at exit: 0 bytes in 0 blocks
==3216==   total heap usage: 1,917 allocs, 1,917 frees, 240,741 bytes allocated
==3216== 
==3216== All heap blocks were freed -- no leaks are possible
==3216== 
==3216== For counts of detected and suppressed errors, rerun with: -v
==3216== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==3230== Memcheck, a memory error detector
==3230== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==3230== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==3230== Command: ./test -r xml "DH::testInsertEasy"
==3230== 
==3230== 
==3230== HEAP SUMMARY:
==3230==     in use at exit: 0 bytes in 0 blocks
==3230==   total heap usage: 1,899 allocs, 1,899 frees, 242,709 bytes allocated
==3230== 
==3230== All heap blocks were freed -- no leaks are possible
==3230== 
==3230== For counts of detected and suppressed errors, rerun with: -v
==3230== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==3247== Memcheck, a memory error detector
==3247== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==3247== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==3247== Command: ./test -r xml "DH::testInsertHard"
==3247== 
==3247== 
==3247== HEAP SUMMARY:
==3247==     in use at exit: 0 bytes in 0 blocks
==3247==   total heap usage: 1,921 allocs, 1,921 frees, 243,413 bytes allocated
==3247== 
==3247== All heap blocks were freed -- no leaks are possible
==3247== 
==3247== For counts of detected and suppressed errors, rerun with: -v
==3247== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==3298== Memcheck, a memory error detector
==3298== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==3298== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==3298== Command: ./test -r xml "SC::testRemoveEASY"
==3298== 
==3298== 
==3298== HEAP SUMMARY:
==3298==     in use at exit: 0 bytes in 0 blocks
==3298==   total heap usage: 1,899 allocs, 1,899 frees, 243,448 bytes allocated
==3298== 
==3298== All heap blocks were freed -- no leaks are possible
==3298== 
==3298== For counts of detected and suppressed errors, rerun with: -v
==3298== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==3330== Memcheck, a memory error detector
==3330== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==3330== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==3330== Command: ./test -r xml "SC::testRemoveHard"
==3330== 
==3330== 
==3330== HEAP SUMMARY:
==3330==     in use at exit: 0 bytes in 0 blocks
==3330==   total heap usage: 1,921 allocs, 1,921 frees, 244,328 bytes allocated
==3330== 
==3330== All heap blocks were freed -- no leaks are possible
==3330== 
==3330== For counts of detected and suppressed errors, rerun with: -v
==3330== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==3370== Memcheck, a memory error detector
==3370== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==3370== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==3370== Command: ./test -r xml "SC::testResizeOnce"
==3370== 
==3370== 
==3370== HEAP SUMMARY:
==3370==     in use at exit: 0 bytes in 0 blocks
==3370==   total heap usage: 2,051 allocs, 2,051 frees, 251,720 bytes allocated
==3370== 
==3370== All heap blocks were freed -- no leaks are possible
==3370== 
==3370== For counts of detected and suppressed errors, rerun with: -v
==3370== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==3404== Memcheck, a memory error detector
==3404== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==3404== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==3404== Command: ./test -r xml "SC::testResizeAll"
==3404== 
==3404== 
==3404== HEAP SUMMARY:
==3404==     in use at exit: 0 bytes in 0 blocks
==3404==   total heap usage: 1,950 allocs, 1,950 frees, 244,904 bytes allocated
==3404== 
==3404== All heap blocks were freed -- no leaks are possible
==3404== 
==3404== For counts of detected and suppressed errors, rerun with: -v
==3404== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==3415== Memcheck, a memory error detector
==3415== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==3415== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==3415== Command: ./test -r xml "SC::testInsertEasy"
==3415== 
==3415== 
==3415== HEAP SUMMARY:
==3415==     in use at exit: 0 bytes in 0 blocks
==3415==   total heap usage: 1,898 allocs, 1,898 frees, 243,400 bytes allocated
==3415== 
==3415== All heap blocks were freed -- no leaks are possible
==3415== 
==3415== For counts of detected and suppressed errors, rerun with: -v
==3415== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==3422== Memcheck, a memory error detector
==3422== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==3422== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==3422== Command: ./test -r xml "SC::testInsertHard"
==3422== 
==3422== 
==3422== HEAP SUMMARY:
==3422==     in use at exit: 0 bytes in 0 blocks
==3422==   total heap usage: 1,920 allocs, 1,920 frees, 244,280 bytes allocated
==3422== 
==3422== All heap blocks were freed -- no leaks are possible
==3422== 
==3422== For counts of detected and suppressed errors, rerun with: -v
==3422== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
