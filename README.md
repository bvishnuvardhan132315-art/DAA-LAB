# practical 1
# summary :

Bubble Sort repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order.
worst case of time complexity is O((n)^2) it means the array is in reverse order 

Selection Sort divides the input array into a sorted and an unsorted region,
continuously finding the minimum element from the unsorted region and swapping it to the beginning.
worst case of time complexity is O((n)^2)

Insertion Sort constructs a sorted array one element at a time by picking the next element 
and inserting it into its correct relative position within the already-sorted region.
worst case of time complexity O((n)^2) it occurs when the array is sorted in reverse order

Merge Sort is a stable, divide-and-conquer algorithm that recursively breaks 
an array into halves, sorts them, and merges the sorted sub-arrays back together.
worst case of time complexity is O(n(logn))

Quick Sort chooses an element as a "pivot" and partitions the remaining elements into 
two sub-arrays according to whether they are less than or greater than the pivot.
worst case of time complexity is O((n)^2)
# conclusion:
implementation and time analysis of sorting algorithm is successfully completed 
There is no single "best" sorting algorithm; the choice depends entirely on the constraints of your environment and data structures

Use Insertion Sort when working with very small arrays or datasets that are already nearly sorted. 
Its low overhead makes it faster than complex algorithms under these conditions.

Use Merge Sort when stability (preserving the original order of duplicate elements) is necessary, 
or when sorting linked lists and external files where sequential memory access is advantageous.

Use Quick Sort for general-purpose, high-performance, in-memory sorting on massive arrays, 
provided you implement randomized pivot choices to protect against the \(O(n^2)\) worst-case bottleneck.

# practical 2
# summary and conclusion

Linear Search Worst Case (O(n)): Occurs when the target element is at the very end of the array or does not exist at all, 
forcing the program to evaluate all n items

Linear Search Worst Case (O(n)): Occurs when the target element is at the very end of the array or does not exist at all, 
forcing the program to evaluate all n items

# PRACTICAL-3
# Summary
Heap Sort is an efficient comparison-based sorting algorithm that uses a Max Heap to sort elements. It first converts the given array into a Max Heap, where the largest element is placed at the root. The algorithm then repeatedly swaps the root with the last unsorted element, reduces the heap size, and restores the Max Heap property. This process continues until the entire array is sorted in ascending order.

# Conclusion
Heap Sort is a reliable and efficient sorting algorithm with a time complexity of O(n log n) in the best, average, and worst cases. It sorts the array in-place, requiring only O(1) extra space. Because of its consistent performance and low memory usage, Heap Sort is well suited for applications where predictable execution time and efficient memory utilization are important.
