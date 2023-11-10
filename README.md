# 목적

### 교육용

Cpython Code의 일부를 C 언어로 대체해서 성능 향상을 관찰하는 것이 목표

### 과제

1. 간단한 알고리즘을 함수로 구현
2. 정수 범위가 주어졌을 때 그 사이에 있는 소수의 개수를 판별

### 명령어
```angular2html
python setup.py build_ext --inplace
```
1. `build_ext`: setup.py의 Extension Object에 명시된 C/C++ code를 compile한다.
   1. Linux에서는 `.so`, Windows에서는 `.pyd` 형식의 파일로 컴파일 된다. 
2. `--inplace`: `setuptools`가 빌드된 파일을 지정된 directory에 두도록 한다.

### 벤치마크

Pure Python Code와 C Integration Code의 성능을 비교(timeit)

### 필요한 도구

VS2022 Win10 Buildtools
