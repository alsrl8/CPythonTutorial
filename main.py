# range -> [lower, upper)
def count_prime_number(lower: int, upper: int):
    lower = max(2, lower)
    cnt = upper - lower  # range
    for i in range(lower, upper):
        print(f'{i=}')
        for j in range(2, i // 2 + 1):
            print(f'{j=}')
            if i % j == 0:  # prime number(소수)가 아님
                cnt -= 1
                break
    return cnt


if __name__ == '__main__':
    import timeit

    ret = timeit.timeit(stmt='count_prime_number(1, 10)', number=10000, setup='from __main__ import count_prime_number')
    print(f'{ret=}')  # Python으로 된 소수 판별 함수

    ret = timeit.timeit(stmt='Example.findPrimes(1, 10)', number=10000, setup='import Example')
    print(f'{ret=}')  # C코드로 된 소수 판별 함수
