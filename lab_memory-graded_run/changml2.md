


## Score: 0/100 (0.00%)


### ✓ - [0/0] - Output from `make`

- **Points**: 0 / 0


```
clang++ -std=c++1y -stdlib=libc++ -g -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -c  tests/catchlib.cpp -o tests/catchlib.o
clang++ -std=c++1y -stdlib=libc++ -g -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -c  tests/unit_tests.cpp -o tests/unit_tests.o
clang++ -std=c++1y -stdlib=libc++ -g -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -c  tests/catch_main.cpp -o tests/catch_main.o
clang++ -std=c++1y -stdlib=libc++ -g -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -c  letter.cpp -o .objs/letter.o
clang++ -std=c++1y -stdlib=libc++ -g -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -c  room.cpp -o .objs/room.o
clang++ -std=c++1y -stdlib=libc++ -g -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -c  allocator.cpp -o .objs/allocator.o
clang++ -std=c++1y -stdlib=libc++ -g -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -c  fileio.cpp -o .objs/fileio.o
clang++ tests/catchlib.o tests/unit_tests.o tests/catch_main.o .objs/letter.o .objs/room.o .objs/allocator.o .objs/fileio.o -std=c++1y -stdlib=libc++ -lpthread  -o test

```


### ✗ - [0/5] - Test the constructor (valgrind)

- **Points**: 0 / 5


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="Test the constructor (valgrind)" tags="[valgrind][weight=5]" filename="tests/unit_tests.cpp" line="17">
      <FatalErrorCondition filename="tests/unit_tests.cpp" line="17">
        SIGSEGV - Segmentation violation signal
      </FatalErrorCondition>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="0" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="1" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/5] - Test allocate() (valgrind)

- **Points**: 0 / 5


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="Test allocate() (valgrind)" tags="[valgrind][weight=5]" filename="tests/unit_tests.cpp" line="24">
      <FatalErrorCondition filename="tests/unit_tests.cpp" line="24">
        SIGSEGV - Segmentation violation signal
      </FatalErrorCondition>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="0" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="1" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/20] - Test printRooms() (valgrind)

- **Points**: 0 / 20


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="Test printRooms() (valgrind)" tags="[valgrind][weight=20]" filename="tests/unit_tests.cpp" line="32">
      <FatalErrorCondition filename="tests/unit_tests.cpp" line="32">
        SIGSEGV - Segmentation violation signal
      </FatalErrorCondition>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="0" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="1" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/30] - Test printRooms() for overall output

- **Points**: 0 / 30


```
Unable to Grade (ETIMEDOUT): Your code did not finish within 10000ms.
```


### ✗ - [0/40] - Test printRooms() for individual output

- **Points**: 0 / 40


```
Exception: std::bad_alloc
```


---

This report was generated for **changml2** using **c4fd27c3b9cb7687bffb02101e38102f56ef2e00** (from **September 17th 2018, 1:00:00 am**)
