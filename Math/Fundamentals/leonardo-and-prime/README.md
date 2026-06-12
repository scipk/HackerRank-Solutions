# Leonardo's Prime Factors

[HackerRank](https://hackerrank-challenge-pdfs.s3.amazonaws.com/17750-leonardo-and-prime-English?response-content-disposition=inline%3B%20filename%3Dleonardo-and-prime-English.pdf&response-content-type=application%2Fpdf&X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIAR6O7GJNX2PJLRWX4%2F20260612%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20260612T073441Z&X-Amz-Expires=3600&X-Amz-SignedHeaders=host&X-Amz-Signature=58c56010d9325d6dad94dba0a1b4036e92d1d0e2f29bc381b29357a4d767444d)

Leonardo loves primes and created $q$ queries where each query takes the form of an integer, $n$. For each $n$, count the maximum number of distinct prime factors of any number in the inclusive range $[1, n]$.

**Note:** Recall that a prime number is only divisible by 1 and itself, and 1 is not a prime number.

### Example

$n = 100$

The maximum number of distinct prime factors for values less than or equal to 100 is 3. One value with 3 distinct prime factors is 30. Another is 42.

---

### Function Description

Complete the `primeCount` function in the editor below.

`primeCount` has the following parameters:

* **int n:** the inclusive limit of the range to check

#### Returns

* **int:** the maximum number of distinct prime factors of any number in the inclusive range $[0 - n]$.

---

### Input Format

The first line contains an integer, $q$, the number of queries.
Each of the next $q$ lines contains a single integer, $n$.

### Constraints

* $1 \le q \le 10^5$
* $1 \le n \le 10^{18}$

---

### Sample Input

```text
6
1
2
3
500
5000
10000000000

```

### Sample Output

```text
0
1
1
4
5
10

```

---

### Explanation

1. 1 is not prime and its only factor is itself.
2. 2 has 1 prime factor, 2.
3. The number 3 has 1 prime factor, 3; 2 has 1 and 1 has 0 prime factors.
4. The product of the first four primes is $2 \times 3 \times 5 \times 7 = 210$. While higher value primes may be a factor of some numbers, there will never be more than 4 distinct prime factors for a number in this range.