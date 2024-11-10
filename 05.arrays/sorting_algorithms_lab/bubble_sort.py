from random_list_generator import *
#-----------------------------------------------------------------------------
def bubble_sort(array_to_sort):
    # outer loop to iterate through the list n times
    for n in range(len(array_to_sort) - 1, 0, -1):

        # inner loop to compare adjacent elements
        for i in range(n):
            if array_to_sort[i] > array_to_sort[i + 1]:

                # swap elements if they are in the wrong order
                swapped = True
                array_to_sort[i], array_to_sort[i + 1] = array_to_sort[i + 1], array_to_sort[i]
#-----------------------------------------------------------------------------
# random list to be sorted
random_array = random_list_generator(10, 1, 20)

print("Unsorted list is:")
print(random_array)

bubble_sort(random_array)

print("Sorted list is:")
print(random_array)