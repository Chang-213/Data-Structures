


## Score: 60/80 (75.00%)


### ✓ - [0/0] - Output from `make`

- **Points**: 0 / 0


```
clang++ -std=c++1y -stdlib=libc++ -g -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -c  tests/basic.cpp
clang++ basic.o -std=c++1y -stdlib=libc++ -lpthread -o test

```


### ✓ - [10/10] - test_mirror

- **Points**: 10 / 10





### ✓ - [10/10] - test_isOrderedRecursive

- **Points**: 10 / 10





### ✓ - [10/10] - test_isOrderedIterative

- **Points**: 10 / 10





### ✓ - [10/10] - test_InorderTraversal

- **Points**: 10 / 10





### ✓ - [10/10] - test_getPaths

- **Points**: 10 / 10





### ✓ - [10/10] - test_calcFromAST_simple

- **Points**: 10 / 10





### ✗ - [0/10] - test_calcFromAST_intermediate

- **Points**: 0 / 10


```
Original: calc_tree.eval() == Approx(res).margin(0.1)
Expanded: 696.0 == Approx( 39766.0 )
```


### ✗ - [0/10] - test_calcFromAST_complex

- **Points**: 0 / 10


```
Original: calc_tree.eval() == Approx(res).margin(0.1)
Expanded: 696.0 == Approx( 73285.9396825397 )
```


### ✓ - [0/0] - test_sumDistances

- **Points**: 0 / 0





---

This report was generated for **changml2** using **403937496f2f3847725ccab905b34768410b10fb** (from **October 8th 2018, 12:15:00 am**)
