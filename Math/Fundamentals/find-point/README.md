# Find the Point
Consider two points, $p=(p_x, p_y)$ and $q=(q_x, q_y)$. We consider the inversion or [point reflection](https://en.wikipedia.org/wiki/Point_reflection), $r=(r_x, r_y)$, of point $p$ across point $q$ to be a $180\degree$ rotation of point $p$ around $q$.

Given $n$ sets of points $p$ and $q$, find $r$ for each pair of points and print two space-separated integers denoting the respective values of $r_x$ and $r_y$ on a new line.

### Function Description

Complete the `findPoint` function in the editor below.

`findPoint` has the following parameters:

- int px, py, qx, qy: x and y coordinates for points  and 

### Returns

- int[2]: x and y coordinates of the reflected point 

### Input Format

The first line contains an integer, $n$, denoting the number of sets of points.
Each of the $n$ subsequent lines contains four space-separated integers that describe the respective values of $p_x$, $p_y$, $q_x$, and $q_y$ defining points $p=(p_x,p_y)$ and $q=(q_x,q_y)$.

### Constraints
- $1 \le n \le 15$
- $-100 \le p_x , p_y, q_x, q_y, \le 100$
### Sample Input
```
2
0 0 1 1
1 1 2 2
```
### Sample Output
```
2 2
3 3
```
### Explanation

The graphs below depict points $p$, $q$, and $r$ for the $n=2$ points given as Sample Input:

1. ![find-point-0011.png](https://s3.amazonaws.com/hr-challenge-images/128/1476208076-15f0f71f16-find-point-0011.png)
1. ![find-point-1122.png](https://s3.amazonaws.com/hr-challenge-images/128/1476207535-debed1b871-find-point-1122.png)