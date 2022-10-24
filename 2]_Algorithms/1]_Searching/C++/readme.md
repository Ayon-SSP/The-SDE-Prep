# Searching

## Linear Search

> Linear search is a very simple search algorithm. In this type of search, a sequential search is made over all items one by one. Every item is checked and if a match is found then that particular item is returned, otherwise the search continues till the end of the data collection.

### Algorithm

> ```algorithm
>Step 1: Set i to 1
>Step 2: if i > n then go to step 7
>Step 3: if A[i] = x then go to step 6
>Step 4: Set i to i+1
>Step 5: Go to Step 2
>Step 6: Print Element x Found at index i and go to step 8
>Step 7: Print element not found
>Step 8: Exit
>```

### Complexity

#### Time
>```js
>
>   - Worst Case: O(n) 
>       // when element is not present or at last index of array
> 
>   - Average Case: O(n) 
>       //when element is at some random position in array
> 
>   - Best Case: O(1) 
>       // when element is at first index of array
> 
>```

#### Space
>```js
>   O(1)
>     // no extra space is required
>```

### Drawbacks

> * as the size of the array increases, the number of comparisons in each case also increases linearly.
> * so if size of array is 10^10 elements, and as current computer computes 10^8 operations per sec ( avg ) , it would take 10^2 secs to search on avg which is very slow

hence we need a better algorithm to search an element in an array

## Binary Search

> Binary search is a search algorithm that finds the position of a target value within a sorted array. Binary search compares the target value to the middle element of the array. If they are not equal, the half in which the target cannot lie is eliminated and the search continues on the remaining half, again taking the middle element to compare to the target value, and repeating this until the target value is found. If the search ends with the remaining half being empty, the target is not in the array.

### Algorithm

> ```algorithm
>Step 1: Set L to 0 and R to n-1.
>Step 2: If L > R, the search terminates as unsuccessful.
>Step 3: Set m (the position of the middle element) to the floor (the largest previous integer) of (L + R) / 2.
>Step 4: If A[m] < T, set L to m + 1 and go to step 2.
>Step 5: If A[m] > T, set R to m - 1 and go to step 2.
>Step 6: Now A[m] = T, the search is done; return m.
>```

### Complexity

#### Time

>```js
>   - Worst Case: O(log n)
>       // when element is not present or at last index of array
>   - Average Case: O(log n)
>       //when element is at some random position in array
>   - Best Case: O(1)
>       // when element is at mid index of array
>```

#### Space

>```js
>   O(1)
>     // no extra space is required
>```

### Benefits

> * Binary search is much faster than linear search, especially for large arrays.
> * taking previous example of 10^10 elements, it would be eliminating half of the array in each iteration, so it would be faster than linear search