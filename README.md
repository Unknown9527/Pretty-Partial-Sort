# Pretty-Partial-Sort
Pretty Partial Sort

Given a vector<int>, and index i, rearrange the vector such that:
  
all items less than or equal to v[i] are on the left, and all items greater than v[i] are on the right

Run with
```
bazel run src/main:main
```

Test with
```
bazel test tests:tests
```
