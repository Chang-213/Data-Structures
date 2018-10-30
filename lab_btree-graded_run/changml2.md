


## Score: 35/45 (77.78%)


### ✓ - [0/0] - Output from `make`

- **Points**: 0 / 0


```
clang++  -std=c++1y -stdlib=libc++ -g -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -msse2 -c cs225/HSLAPixel.cpp -o .objs/cs225/HSLAPixel.o
clang++  -std=c++1y -stdlib=libc++ -g -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -msse2 -c cs225/PNG.cpp -o .objs/cs225/PNG.o
clang++  -std=c++1y -stdlib=libc++ -g -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -msse2 -c cs225/lodepng/lodepng.cpp -o .objs/cs225/lodepng/lodepng.o
clang++  -std=c++1y -stdlib=libc++ -g -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -msse2 -c tests/basic.cpp -o .objs/tests/basic.o
clang++  -std=c++1y -stdlib=libc++ -g -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -msse2 -c cs225/catch/catchmain.cpp -o .objs/cs225/catch/catchmain.o
clang++ .objs/cs225/HSLAPixel.o .objs/cs225/PNG.o .objs/cs225/lodepng/lodepng.o .objs/tests/basic.o .objs/cs225/catch/catchmain.o  -std=c++1y -stdlib=libc++ -lpthread -o test

```


### ✓ - [5/5] - test_insertion_idx_emp

- **Points**: 5 / 5





### ✓ - [5/5] - test_insertion_idx_small

- **Points**: 5 / 5





### ✗ - [0/5] - test_btree3_small

- **Points**: 0 / 5

```
==6203== Memcheck, a memory error detector
==6203== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==6203== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==6203== Command: ./test -r xml "test_btree3_small"
==6203== 
==6203== Conditional jump or move depends on uninitialised value(s)
==6203==    at 0x443E31: BTree<int, int>::find(BTree<int, int>::BTreeNode const*, int const&) const (btree.cpp:51)
==6203==    by 0x443A26: BTree<int, int>::find(int const&) const (btree.cpp:21)
==6203==    by 0x44026C: void verify_finds<int, int>(std::__1::vector<std::__1::pair<int, int>, std::__1::allocator<std::__1::pair<int, int> > >&, BTree<int, int>&) (basic.cpp:59)
==6203==    by 0x4268B1: ____C_A_T_C_H____T_E_S_T____4() (basic.cpp:120)
==6203==    by 0x47A972: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:9870)
==6203==    by 0x46B226: Catch::TestCase::invoke() const (catch.hpp:9771)
==6203==    by 0x46B158: Catch::RunContext::invokeActiveTestCase() (catch.hpp:8655)
==6203==    by 0x467EF6: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:8624)
==6203==    by 0x466551: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:8419)
==6203==    by 0x46F2B3: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:8967)
==6203==    by 0x46DD3E: Catch::Session::runInternal() (catch.hpp:9151)
==6203==    by 0x46DA1E: Catch::Session::run() (catch.hpp:9108)
==6203== 
==6203== Conditional jump or move depends on uninitialised value(s)
==6203==    at 0x443E31: BTree<int, int>::find(BTree<int, int>::BTreeNode const*, int const&) const (btree.cpp:51)
==6203==    by 0x443EB2: BTree<int, int>::find(BTree<int, int>::BTreeNode const*, int const&) const (btree.cpp:56)
==6203==    by 0x443A26: BTree<int, int>::find(int const&) const (btree.cpp:21)
==6203==    by 0x44026C: void verify_finds<int, int>(std::__1::vector<std::__1::pair<int, int>, std::__1::allocator<std::__1::pair<int, int> > >&, BTree<int, int>&) (basic.cpp:59)
==6203==    by 0x4268B1: ____C_A_T_C_H____T_E_S_T____4() (basic.cpp:120)
==6203==    by 0x47A972: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:9870)
==6203==    by 0x46B226: Catch::TestCase::invoke() const (catch.hpp:9771)
==6203==    by 0x46B158: Catch::RunContext::invokeActiveTestCase() (catch.hpp:8655)
==6203==    by 0x467EF6: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:8624)
==6203==    by 0x466551: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:8419)
==6203==    by 0x46F2B3: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:8967)
==6203==    by 0x46DD3E: Catch::Session::runInternal() (catch.hpp:9151)
==6203== 
==6203== 
==6203== HEAP SUMMARY:
==6203==     in use at exit: 0 bytes in 0 blocks
==6203==   total heap usage: 1,765 allocs, 1,765 frees, 222,808 bytes allocated
==6203== 
==6203== All heap blocks were freed -- no leaks are possible
==6203== 
==6203== For counts of detected and suppressed errors, rerun with: -v
==6203== Use --track-origins=yes to see where uninitialised values come from
==6203== ERROR SUMMARY: 5 errors from 2 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_btree3_small" tags="[valgrind][weight=5]" filename="tests/basic.cpp" line="114">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="10" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="10" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [5/5] - test_btree3_large_seq

- **Points**: 5 / 5





### ✓ - [5/5] - test_btree3_large_rand

- **Points**: 5 / 5





### ✓ - [5/5] - test_btree64_large_seq

- **Points**: 5 / 5





### ✓ - [5/5] - test_btree64_large_rand

- **Points**: 5 / 5





### ✗ - [0/5] - test_btree128_med_rand

- **Points**: 0 / 5

```
==6273== Memcheck, a memory error detector
==6273== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==6273== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==6273== Command: ./test -r xml "test_btree128_med_rand"
==6273== 
==6273== Conditional jump or move depends on uninitialised value(s)
==6273==    at 0x443E31: BTree<int, int>::find(BTree<int, int>::BTreeNode const*, int const&) const (btree.cpp:51)
==6273==    by 0x443A26: BTree<int, int>::find(int const&) const (btree.cpp:21)
==6273==    by 0x44026C: void verify_finds<int, int>(std::__1::vector<std::__1::pair<int, int>, std::__1::allocator<std::__1::pair<int, int> > >&, BTree<int, int>&) (basic.cpp:59)
==6273==    by 0x427C39: ____C_A_T_C_H____T_E_S_T____14() (basic.cpp:175)
==6273==    by 0x47A972: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:9870)
==6273==    by 0x46B226: Catch::TestCase::invoke() const (catch.hpp:9771)
==6273==    by 0x46B158: Catch::RunContext::invokeActiveTestCase() (catch.hpp:8655)
==6273==    by 0x467EF6: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:8624)
==6273==    by 0x466551: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:8419)
==6273==    by 0x46F2B3: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:8967)
==6273==    by 0x46DD3E: Catch::Session::runInternal() (catch.hpp:9151)
==6273==    by 0x46DA1E: Catch::Session::run() (catch.hpp:9108)
==6273== 
==6273== Conditional jump or move depends on uninitialised value(s)
==6273==    at 0x443E31: BTree<int, int>::find(BTree<int, int>::BTreeNode const*, int const&) const (btree.cpp:51)
==6273==    by 0x443EB2: BTree<int, int>::find(BTree<int, int>::BTreeNode const*, int const&) const (btree.cpp:56)
==6273==    by 0x443A26: BTree<int, int>::find(int const&) const (btree.cpp:21)
==6273==    by 0x44026C: void verify_finds<int, int>(std::__1::vector<std::__1::pair<int, int>, std::__1::allocator<std::__1::pair<int, int> > >&, BTree<int, int>&) (basic.cpp:59)
==6273==    by 0x427C39: ____C_A_T_C_H____T_E_S_T____14() (basic.cpp:175)
==6273==    by 0x47A972: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:9870)
==6273==    by 0x46B226: Catch::TestCase::invoke() const (catch.hpp:9771)
==6273==    by 0x46B158: Catch::RunContext::invokeActiveTestCase() (catch.hpp:8655)
==6273==    by 0x467EF6: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:8624)
==6273==    by 0x466551: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:8419)
==6273==    by 0x46F2B3: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:8967)
==6273==    by 0x46DD3E: Catch::Session::runInternal() (catch.hpp:9151)
==6273== 
==6273== 
==6273== HEAP SUMMARY:
==6273==     in use at exit: 0 bytes in 0 blocks
==6273==   total heap usage: 2,615 allocs, 2,615 frees, 1,575,760 bytes allocated
==6273== 
==6273== All heap blocks were freed -- no leaks are possible
==6273== 
==6273== For counts of detected and suppressed errors, rerun with: -v
==6273== Use --track-origins=yes to see where uninitialised values come from
==6273== ERROR SUMMARY: 9706 errors from 2 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_btree128_med_rand" tags="[valgrind][weight=5]" filename="tests/basic.cpp" line="169">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="20001" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="20001" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [5/5] - test_btree12_strings

- **Points**: 5 / 5





---

This report was generated for **changml2** using **4dec2fb96778e1b2c306849bab5499b8358b6766** (from **October 29th 2018, 12:15:00 am**)
