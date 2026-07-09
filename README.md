"# C-_DDA" 
That's a very common confusion. Let's understand it with a small array.

Suppose:

Index:  0  1  2  3  4
Array: [5, 4, 3, 2, 1]

n = 5

So:

n - 1 = 4 → last index
n - 2 = 3 → second last index
Why j <= n - 1?

The inner loop is searching for the smallest element.

We must check every element until the last one.

for (int j = i; j <= n - 1; j++)

Since n - 1 is the last index, this means:

j = 0, 1, 2, 3, 4

which checks all elements.

Most programmers write it like this:

for (int j = i; j < n; j++)

because j < 5 is exactly the same as j <= 4.

Why i <= n - 2?

The outer loop decides how many passes we need.

For n = 5:

Pass 1 → i = 0
Pass 2 → i = 1
Pass 3 → i = 2
Pass 4 → i = 3

Notice we stop at i = 3 (n - 2).

Why don't we do i = 4?

Look at the array after four passes:

[1, 2, 3, 4, 5]
             ^
          only one element left

There is only one element remaining.

Can one element be unsorted?

No! If every other element is already in the correct position, the last one is automatically correct.

So a fifth pass would do nothing.

Visual
n = 5

Index: 0 1 2 3 4

Pass 1 -> i = 0
Pass 2 -> i = 1
Pass 3 -> i = 2
Pass 4 -> i = 3

Done.

No need for:

Pass 5 -> i = 4 ❌

because there's nothing left to compare.

Another way to write it

These two loops are exactly the same:

for (int i = 0; i <= n - 2; i++)

and

for (int i = 0; i < n - 1; i++)

Similarly,

for (int j = i; j <= n - 1; j++)

is the same as

for (int j = i; j < n; j++)

Most C++ programmers prefer the < n style because it's easier to read.
