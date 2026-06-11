# Minimum Height Triangle

Given integers $b$ and $a$, find the smallest integer $h$, such that there exists a triangle of height $h$, base $b$, having an area of at least $a$.

![image](https://s3.amazonaws.com/hr-assets/0/1496306792-f2c37eea44-triangle.jpg)

### Example

$b = 4$

$a=6$

The minimum height $h$ is $3$. One example is a triangle formed at points (0, 0), (4, 0), (2, 3).

### Function Description

Complete the lowestTriangle function in the editor below.

lowestTriangle has the following parameters:

- int b: the base of the triangle
- int a: the minimum area of the triangle

### Returns

- int: the minimum integer height to form a triangle with an area of at least 

### Input Format

There are two space-separated integers $b$ and $a$, on a single line.

### Constraints

- $1 \le b \le 10^6$
- $1 \le a \le 10^6$

### Sample Input 0

```
2 2
```

### Sample Output 0

```
2
```

### Explanation 0

The task is to find the smallest integer height of the triangle with base $2$ and area at least $2$. It turns out, that there are triangles with height $2$, base $2$ and area $2$, for example a triangle with corners in the following points:

$(1,1), (3,1), (1,3)$:

![image](https://s3.amazonaws.com/hr-assets/0/1496129560-08d4c76295-1495593239-31007b94ae-ScreenShot2017-05-24at4.33.32AM.png)

It can be proved that there is no triangle with integer height smaller than $2$, base $2$ and area at least $2$.

### Sample Input 1

```
17 100
```

### Sample Output 1

```
12
```

### Explanation 1

The task is to find the smallest integer height of the triangle with base $17$ and area at least $100$. It turns out, that there are triangles with height $12$, base $17$ and area $102$, for example a triangle with corners in the following points:

$(2,2), (19,2), (16,14)$.

![image](https://s3.amazonaws.com/hr-assets/0/1496129487-f3d8717a4b-1495594014-3ba1b914c6-ScreenShot2017-05-24at4.46.19AM.png)

It can be proved that there is no triangle with integer height smaller than $12$, base $17$ and area at least $100$.